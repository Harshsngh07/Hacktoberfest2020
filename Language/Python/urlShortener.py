# A python program to use TinyURL to shorten an given URL
from __future__ import with_statement

import contextlib

try: 
    from urllib.parse import urlencode           
except ImportError: 
    from urllib import urlencode

try: 
    from urllib.request import urlopen 
except ImportError: 
    from urllib2 import urlopen

def make_tiny(url): 
    request_url = ('http://tinyurl.com/api-create.php?' + urlencode({'url':url}))     
    with contextlib.closing(urlopen(request_url)) as response:                       
        return response.read().decode('utf-8 ')                                       
  
def main():
    url = input()
    print(make_tiny(url)) 

if __name__ == '__main__':
    main() 