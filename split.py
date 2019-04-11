# text = "\nage:  24 \nname:  yanan\nheight:160"
# print(text)
#
# text_ = re.sub(r'\n','\n      ',text)
# print (text_)
#
string ="Byte 134:() first Byte  Byte 135:() second Byte"
t = re.split(('Byte')+'.'+('Byte'),string)
print (t)
y =re.findall('Byte\s\d+\S+\s\w+\sByte',string)
print(y)

# /*如何使用在split中使用正则表达式达到和findall一样的输出*
