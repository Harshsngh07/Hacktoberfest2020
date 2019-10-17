# Simple Calculator
# By yash872
# I wrote a simple calculator to compute addition, subtraction, multiplication, division, and modulo. It's not the best grammar-wise since I was lazy and tried to use as few "if"s as possible, but it works.

op_to_str = {"+":"add",'-':'subtract','*':'multiply','/':'divide',
             '%':'modulo'}

def intput(prompt=""):
    """returns int(input(prompt))"""
    return int(input(prompt))

def ask_till_valid(prompt,answers):
    """input(<prompt>) until answer is one of the valid answers supplied in
    answers."""
    ans = input(prompt)
    while ans.lower() not in answers:
        ans = input(prompt)
    return ans

def main():
    x = intput("\nWhat number? ")
    op = ask_till_valid("Which operation ? (+,-,*,/,%) ",["+","-","*","/","%"])
    y = intput(
        "What number would you like to "+op_to_str.get(op)+" "+str(x)+" by? ")
    if op == '+':
        t = x+y
    elif op == '-':
        t = x-y
    elif op == '*':
        t = x*y
    elif op == '/':
        t = x/y
    elif op == '%':
        t = x%y
    else:
        t = ""
    print("Your total is",t)
    again = ask_till_valid("Use again? (YES/NO)",['yes','no'])
    if again == 'yes':
        main()
    else:
        pass

main()
