# cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d ":" -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 'H;1h;$!d;x;y/\n/,/' | sed 's/,/, /g' | sed 's/.*/&./' | tr -d "\n"
# cat /etc/passwd | grep -v "^#" | sed '1!n;d' | sed -e 's/:.*//' | rev | sort -r | sed -n "$FT_LINE1 $FT_LINE2 p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed 's/$/./' | tr -d '\n'
# cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/:\(.*\)//g' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
# cat /etc/passwd| grep -v "#" | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed "s/$/, /" | tr -d "\n" | sed "s/, $/./g" | tr -d "\n"
# cat /etc/passwd | grep -v '^#' | awk 'NR%2==0' | cut -d':' -f1 | rev | sort -r | head -n "$(($FT_LINE2 - 1))" | tail -n "$(($FT_LINE2 - $FT_LINE1 + 1))" | tr '\n' ',' | sed 's/,$/\./' | sed 's/,/, /g' | tr -d '\n'
# cat -e /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | awk -F : '{ print $1 }' | rev | tail -r | awk -v ln1=$FT_LINE1 -v ln2=$FT_LINE2 'NR >= ln1 && NR <= ln2' | awk '{ printf $0", " }' | sed 's/.\{2\}$/./'
cat /etc/passwd | sed '/^#/d; 1d; s/:.*//' | awk 'NR%2==0' | rev | sort -r | sed "$FT_LINE1"','"$FT_LINE2"'!d' | tr '\n' ' ' | sed 's/ /, /g; s#, $#.#' | tr -d '\n'

