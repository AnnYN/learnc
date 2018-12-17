def convert(num):
    num = '0x' + hex(num).strip('0x').zfill(5)
    return num

list = [0x008, 0x080, 0x0008, 0x090, 0x009]
for value in list:
    print('origin value', hex(value))
    value_ = convert(value)
    print('convert value', value_)
# origin value 0x8
# convert value 0x00008
# origin value 0x80
# convert value 0x00008
# origin value 0x8
# convert value 0x00008
# origin value 0x90
# convert value 0x00009
# origin value 0x9
# convert value 0x00009
