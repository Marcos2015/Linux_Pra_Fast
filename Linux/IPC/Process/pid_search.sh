#ps x | awk -F " " '{if($3=="S" || $3=="U")print $0}'
ps x | awk -F " " '{if($3=="Z+")print $0}'
