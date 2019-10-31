import re

# Check if string is a MAC address

def isMAC48Address(inputString):
    if re.match(r"^([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})$", inputString):
        return True
    return False

print (isMAC48Address('a1:2d:d3:f4:0d:1a')) # True
print (isMAC48Address('a1:2d:d3:f4:0g:1a')) # False
print (isMAC48Address('a1:2d:d3:f4:00:a')) # False
print (isMAC48Address('00:00:00:00:00:00')) # True