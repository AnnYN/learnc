
### prepend file

```
echo text| cat myfile > file1.txt && rm myfile
```

```
echo -e "DATA-line-1\nDATA-Line-2\n$(cat file1.txt)" > file1.txt
```

### use sed command 
```
sed -i 'ls;^;DATA_Line-1\m;' file1.txt
```
```
gcc -O1 -S code.c
```
