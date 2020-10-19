#This program will let you draft and send the mail.


import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
host_mail="******@gmail.com"   #Enter your mail id.
host_pass="****"     #Enter your mail's password.
guest_mail="*****@gmail.com"  #Enter the mail id of the guest whom you want to send the mail.
subject="Mailing through python code"
body="successfully sent the mail"
message = MIMEMultipart()
message['From']=host_mail
message['To']=guest_mail
message['Subject']=subject
message.attach(MIMEText(body,'plain'))
session= smtplib.SMTP('smtp.gmail.com',587)
session.starttls()
session.login(host_mail,host_pass)
text=message.as_string()
session.sendmail(host_mail,guest_mail,text)
session.quit()
print("Mail sent successfully")
