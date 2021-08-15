id -G -n $FT_USER | tr ' ' ',' | tr -d '\n'
# id -G -n $FT_USER | sed "s/ /,/g" | tr -d "\n"
