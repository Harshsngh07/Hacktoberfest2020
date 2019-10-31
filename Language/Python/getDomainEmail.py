# This function return domain of an email

def getEmailDomain(address):
    return (address[address.rfind('@')+1:])

print(getEmailDomain('gates@microsoft.com'))
print(getEmailDomain('trovalds@linux.com'))
print(getEmailDomain('trovalds@linux.com.uk'))