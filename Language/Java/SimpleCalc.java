
import java.util.Scanner;

class SimpleCalc {
	public static void main(String args[]) 
	throws java.io.IOException
	{

			char choice;
			Scanner input = new Scanner(System.in);

	   		do 
	   		{
	   			System.out.print("Enter first number: ");

				double num1;
				num1 = input.nextDouble();

				System.out.print("Enter second number: ");
				double num2;
				num2 = input.nextDouble();

				System.out.println("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
				System.out.print("Enter arithmetic operator (+,-,*,/): ");
				char op = input.next().charAt(0);
				System.out.println("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");

				switch (op)
				{
					case '+':
					System.out.println("Answer: " + (num1 + num2));
					break;

					case '-':
					System.out.println("Answer: " + (num1-num2));
					break;

					case '*':
					System.out.println("Answer: " + (num1*num2));
					break;

					case '/':
					System.out.println("Answer: " + (num1/num2));
					break;

				}

				System.out.print("Continue? (y/n): ");
				choice = (char)System.in.read();

			} while (choice == 'y');
			input.close();
	}
	
}