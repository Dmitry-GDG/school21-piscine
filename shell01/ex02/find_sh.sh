find . -type f -name "*.sh" -exec basename {} '.sh' \;
# find . -type f -name '*.sh' -exec basename {} \; | sed 's/.sh$//'
# find . -name "*.sh" -exec basename {} .sh \;
# call it:
# ./find_sh.sh | cat -e