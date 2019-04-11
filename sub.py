text = "\nage:  24 \nname:  yanan\nheight:160"
print(text)

text_ = re.sub(r'\n','\n           ',text)
print (text_)


/*
age:  24 
name:  yanan
height:160

           age:  24 
           name:  yanan
           height:160

Process finished with exit code 0
*/

******************************！！！！！！！！*********************************************

#  re.sub里面的第二个参数'\n           '，如果我要匹配30多个空格就很麻烦，这个参数要好长了，
#有什么方法吗，我试着'\n\s{30}'但是它直接把\s{30}当称字符串；
