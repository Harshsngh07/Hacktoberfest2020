import java.util.ArrayList;

public class sortArray {

	public static void main(String[] args) {
		int arr[]= {1,-1,0,3,4,7};
		ArrayList<Integer> a=new ArrayList<>();
		for(int i=0;i<arr.length;i++) {
			a.add(arr[i]);
		}
		sort(a);
		System.out.println(a);	
	}
	static ArrayList<Integer> sort(ArrayList<Integer> a){
		if(a.size()==1) {
			return a;
		}
		int temp=a.remove(a.size()-1);
		sort(a);
		merge(a,temp);
		return a;
	}
	static void merge(ArrayList<Integer> a,int temp) {
		if(a.size()==0 || a.get(a.size()-1)<=temp) {
			a.add(temp);
			return;
		}
		int val=a.remove(a.size()-1);
		merge(a,temp);
		a.add(val);	
	}
}
