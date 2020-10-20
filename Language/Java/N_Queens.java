/*dgp0301									
 *Create a program where n number of queens are placed on an
 * n by n board in a manner where none of the queens can attack
 * each other 
 */
import java.io.*;
import java.util.*;

public class N_Queens {
	//moves the queens until a solution is found 
	public static int Solve(int n) {
		Stack <Integer> s = new Stack<Integer>();
		int solutions = 0;
		int current = 1;
		int previous;
		
		//code for backtracking
		while(!(current>n)) {
			/*when solution is found increment solutions backtrack to first available slot
			 * if it backtracks to first slot and the pointer is maxxed ends loop
			 */
			if(s.size() == n) {
				solutions++;
				print(s);
				System.out.println(solutions);
				previous=s.pop();
				while(previous==n&&s.size()>1) {
					previous=s.pop();
				}
				if(s.size()==1&&previous==n) {
					break;
				}
				current=previous+1;
			}
			/*
			 * check if the the current position would cause problems
			 * if it works push onto stack
			 */
			else if (isSafe(s,current)) {
				s.push(current);
				current=1;
			}
			/*
			 * If not safe and current isn't maxxed just move it over
			 */
			else if(current<n) {
				current++;
			} 
			/*backtrack to first available slot
			 * if it backtracks to first slot and the pointer is maxxed ends loop
			 */
			else {
				if(s.size()==1&&s.peek()==n) {
					break;
				}
				else {
					previous=s.pop();
					while(previous==n) {
						previous=s.pop();
					}
					if(s.size()==0&& previous == n) {
						break;
					}
					current=previous+1;
				}
			}
		}
		return solutions;
	}
	//Method that makes sure the queen about to be placed can't be attacked
	public static boolean isSafe(Stack<Integer> s, int c) {
		//loop to go through each row
		for(int i = 0; i < s.size(); i++) {
			//check the vertical
			if(s.get(i) == c) {
				return false;
			}
			//checks the lower diagonals
			if(Math.abs(c - s.get(i))== s.size() - i   ) {
				return false;
			}
		}
		return true;
	}
	//Method that prints out the board
	public static void print(Stack<Integer> s) {
		for(int i=0;i<s.size();i++) {
			for( int j=1;j<=s.size();j++) {
				if(j==s.get(i)) 
					System.out.print(" Q ");
				else
					System.out.print(" * ");
			}
			System.out.println();
		}
	}
	public static void main(String[]args) {
		//Get the number of queens from user and create board
		Scanner input = new Scanner(System.in);
		System.out.print("Enter how many queens you want: ");
		int n = input.nextInt();
		input.close();
		//Stack<Integer> board = new Stack<Integer>();
		int solutions= Solve(n);
		System.out.println(solutions + " is the total number of solutions.");		
	}
}	