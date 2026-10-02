// Write a Java program to demonstrate multiple inheritance using interfaces.
// Create a class named `Student` to store the student's `name` and `rollNo`.
// Create two interfaces:
// `AcademicMarks` – containing methods to accept and display marks for two subjects.
// `SportsMarks` – containing a constant `SPORTS_BONUS = 15` and a method to display the sports bonus marks.
// Create a class named `Result` that extends the `Student` class and implements both `AcademicMarks` and `SportsMarks`.
// The `Result` class should:
// Accept the marks of two subjects.
// Add the sports bonus marks to the subject marks.
// Calculate the total marks and percentage.
// Display the student's name, roll number, subject marks, sports bonus, total marks, and percentage.
// In the `main()` method, create an object of the `Result` class, accept the required details using the `Scanner` class, and display the final result.
// Note: Demonstrate multiple inheritance in Java by extending one class and implementing two interfaces.




import java.util.Scanner;

class Student {
    String name;
    int rollNo;

    void acceptStudent(Scanner sc) {
        System.out.print("Enter student name: ");
        name = sc.nextLine();

        System.out.print("Enter roll number: ");
        rollNo = sc.nextInt();
    }
}

interface AcademicMarks {
    void acceptMarks(Scanner sc);
    void displayMarks();
}

interface SportsMarks {
    int SPORTS_BONUS = 15;

    void displaySportsBonus();
}

class Result extends Student implements AcademicMarks, SportsMarks {

    int mark1, mark2;
    int total;
    double percentage;

    public void acceptMarks(Scanner sc) {
        System.out.print("Enter marks for Subject 1: ");
        mark1 = sc.nextInt();

        System.out.print("Enter marks for Subject 2: ");
        mark2 = sc.nextInt();
    }

    public void displayMarks() {
        System.out.println("Subject 1 Marks: " + mark1);
        System.out.println("Subject 2 Marks: " + mark2);
    }

    public void displaySportsBonus() {
        System.out.println("Sports Bonus: " + SPORTS_BONUS);
    }

    void calculateResult() {
        total = mark1 + mark2 + SPORTS_BONUS;
        percentage = (total / 215.0) * 100;
    }

    void displayResult() {
        System.out.println("\n----- STUDENT RESULT -----");
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);

        displayMarks();
        displaySportsBonus();

        System.out.println("Total Marks: " + total);
        System.out.println("Percentage: " + percentage + "%");
    }
}

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Result r = new Result();

        r.acceptStudent(sc);
        r.acceptMarks(sc);
        r.calculateResult();
        r.displayResult();

        sc.close();
    }
}