//java program to check if a number is armstrong or not

import java.util.Scanner;
public class Armstrong
{
    int num;
    int sum;
    int temp;
    int rem;
    public void armstrong()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number:");
        num = sc.nextInt();

        temp = num;
        while(temp>0)
        {
            rem = temp%10; //retirving the numbers from the last
            sum = sum + rem*rem*rem; //finding the cube of each number and summing it up
            temp = temp/10; //retrieving the digits that are left
        }
        if(num == sum)
        {
            System.out.println("It's an Armstrong Number");
        }
        else
        {
            System.out.println("It's not an Armstrong Number");
        }
    }

    public void main()
    {
        Armstrong obj = new Armstrong();
        obj.armstrong();
    }
}