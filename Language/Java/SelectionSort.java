/**
 * General Selection Sort
 * 
 * @author Rhythm Goel
 */
public class Selection extends Sort {
	/**
	 * sort the array
	 * @param a - array
	 */
	public static void sort(Comparable[] a) {
		for (int i = 0; i < a.length - 1; i++) {
			int index = i;
			for (int j = i + 1; j < a.length; j++) {
				if (less(a[j], a[index])){
					index = j;//searching for lowest index
				}
			}
			exch(a, index, i);
		}
	}
}
