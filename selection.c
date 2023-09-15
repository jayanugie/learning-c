#include <stdio.h>;

int main() {
	
	/*
		SELECTION SYNTAX IN C LANGUAGE
		
		IF STATEMENT
		if (condition) {
			code to execute if condition is true
		} else if (other condition) {
			code to execute if other condition is true
		} else {
			code to execute if none of the conditions are true
		}
		
		SWITCH CASE
		switch (expression) {
		    case value1:
		        // Code to be executed if 'expression' equals 'value1'
		        break;
		    case value2:
		        // Code to be executed if 'expression' equals 'value2'
		        break;
		    // ... more cases ...
		    default:
		        // Code to be executed if none of the cases match 'expression'
}
	*/
	
	// if statement example
	int x = 5;
	if (x == 0) {
	    printf("x is zero\n");
	} else if (x < 0) {
	    printf("x is negative\n");
	} else {
	    printf("x is positive\n");
	}
	
	// switch case example
	int day = 2;
	switch (day) {
	    case 1:
	        printf("Monday\n");
	        break;
	    case 2:
	        printf("Tuesday\n");
	        break;
	    case 3: 
	    	printf("Wednesday\n");
	    	break;
	    // ... other cases ...
	    default:
	        printf("Invalid day\n");
}

}
