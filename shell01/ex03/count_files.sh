#Напишите командную строку, которая отображает количество обычных файлов 
# и каталогов в текущем каталоге и во всех его подкаталогах, 
# включая «.» из начального каталога.
#!/bin/sh
#find . -print | wc -l | awk '{print $1}'
#find . -type f -o -type d | wc -l | sed 's# * ##'
#find . \( -type f -o -type d \) | wc -l | tr -d ' '
#find . -type f -o -type d | wc -l | tr -d ' '
#( find . -type d && find . -type f ) | wc -l | sed 's/ //g'
find . \( -type f -o -type d  \) -print | wc -l | tr -d " "
# find . -type f -o -type d | wc -l | bc
#call it:
# ./count_files.sh | cat -e