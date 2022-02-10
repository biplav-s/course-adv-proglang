package mypackage;

class Employee {
	void myprint() {
		System.out.println("Employee - base myprint");
	}
}

class EmployeeExec extends Employee {
	void myprint() {
		System.out.println("EmployeeExec - derived myprint");
	}
}

class EmployeeManager extends Employee {
	void myprint() {
		System.out.println("EmployeeManager - derived myprint");
	}
}

class EmployeeIntern extends Employee {
	void myprint() {
		System.out.println("EmployeeIntern - derived myprint");
	}
}

public class L10L12PolyDemo {

	// Java's limited support of polymorphism
	
	public static void main(String args[]) {
		Employee e;
		e = new Employee();
		e.myprint();
		
		EmployeeManager em;
		em = new EmployeeManager();
		em.myprint();
		
		EmployeeExec ee;
		ee = new EmployeeExec();
		ee.myprint();
		
		EmployeeIntern ei;
		ei = new EmployeeIntern();
		ei.myprint();

	}

}
