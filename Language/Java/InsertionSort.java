import java.util.Scanner;

public class Insertion {

	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int listLength;
		boolean valid;
	
		do {
		
			System.out.print("Enter the length of the list: ");
			listLength = input.nextInt();
			
			if (listLength < 2) {
			
				System.out.println("Please enter a number greater than 1.");
				valid = false;
			
			} else
				valid = true;
			
		} while (valid == false);
		
		int list[] = new int[listLength];
		
		for (int x = 0; x < listLength; x++) {
			
			int num;
			
			System.out.printf("Enter value #%d: ", x + 1);
			num = input.nextInt();
			
			list[x] = num;
			
		}
		
		InsertionSort(list);
		
	}

	private static void InsertionSort(int[] list) {
		
		int held;
		
		for (int x = 1; x < list.length; x++) {
						
			for (int y = x; y > 0; y--) {
				
				if (list[y] < list[y - 1]) {
					
					held = list[y - 1];
					list[y - 1] = list[y];
					list[y] = held;
					
				}
				
			}
			
		}
		
		for (int x = 0; x < list.length; x++) 
			System.out.printf("%d ", list[x]);		
		
	}


}
