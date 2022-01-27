package mypackage;

public class L6ClassDemo {

	public String firstName = "default-Maria";
	public String lastName = "default-Wang";

	/**
	 * A default constructor
	 */
	public L6ClassDemo() {
	}

	/**
	 * A constructor which sets first name
	 * 
	 * @param first
	 */
	public L6ClassDemo(String first) {
		this.firstName = first;
	}

	/**
	 * A constructor which sets first and last names
	 * 
	 * @param first
	 * @param last
	 */
	public L6ClassDemo(String first, String last) {
		this.firstName = first;
		this.lastName = last;
	}

	/**
	 * Get the value of first part of name
	 * 
	 * @return
	 */
	public String getFirst() {
		return this.firstName;
	}

	/**
	 * Get the value of last part of name
	 * 
	 * @return
	 */
	public String getLast() {
		return this.lastName;
	}

	public static void main(String[] args) {

		// Using default constructor
		L6ClassDemo c1 = new L6ClassDemo();
		System.out.println("Object 1 has values of member variables: " + c1.getFirst() + ", " + c1.getLast());

		// Using constructor with one var
		L6ClassDemo c2 = new L6ClassDemo("Joginder");
		System.out.println("Object 2 has values of member variables: " + c2.getFirst() + ", " + c2.getLast());

		// Using constructor with two var
		L6ClassDemo c3 = new L6ClassDemo("Joginder", "Singh");
		System.out.println("Object 3 has values of member variables: " + c3.getFirst() + ", " + c3.getLast());

	}

}
