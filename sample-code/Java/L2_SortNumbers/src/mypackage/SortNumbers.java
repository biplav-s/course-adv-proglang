package mypackage;

public class SortNumbers {

	public static void main(String[] args) {

		// To store passed numbers
		int[] numbers = null;

		// Something to do only if numbers are passed
		if (args.length > 1) {
			int count = Integer.parseInt(args[0]);
			numbers = new int[count];

			// args has the arguments passed as a list. Get total arguments
			for (int i = 1; i < args.length; i++) {
				System.out.println("\t location = " + i + ": " + args[i]);
				numbers[i - 1] = Integer.parseInt(args[i]);
			} // end-for
		} // end-if

		// Sort the numbers
		int[] sorted = bubbleSort(numbers);
		
		// Print sorted output numbers
		System.out.println("Sorted output: ");
		for (int i = 0; i < sorted.length; i++) {
			System.out.println("\t " + sorted[i]);
		} // end-for

	}
	

	// Using code from: https://www.geeksforgeeks.org/bubble-sort/ 
	public static int[] bubbleSort(int arr[]) {
		int n = arr.length;
		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n - i - 1; j++)
				if (arr[j] > arr[j + 1]) {
					// swap arr[j+1] and arr[j]
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}

		return arr;
	}
}
