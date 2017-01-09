ldapsearch -Q "uid=z*" |grep "^cn" | sort -f -r | cut -c 5-
