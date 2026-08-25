
import java.util.Scanner;
class Books{

	private int bookno;
	private String bookname;
	private String author;
	private String publisher;

	void setno(int bookno){
		this.bookno=bookno;
	}

	void setname(String bookname){
		this.bookname=bookname;
	}
	
	void setauth(String author){
		this.author=author;
	}

	void setpubl(String publisher){
		this.publisher=publisher;
	}

	int getno(){
		return bookno;
	}
	String getname(){
		return bookname;
	}
	String getauth(){
		return author;
	}
	String getpubl(){
		return publisher;
	}
	
}

class book{
	public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	Books b = new Books();
	
	System.out.println("Enter the bookno : ");
	b.setno(sc.nextInt());
	sc.nextLine();

	System.out.print("Enter Book Name: ");
        b.setname(sc.nextLine());

        System.out.print("Enter Author: ");
        b.setauth(sc.nextLine());

        System.out.print("Enter Publisher: ");
        b.setpubl(sc.nextLine());

       
        System.out.println("\nBook Details:");
        System.out.println("Book Number : " + b.getno());
        System.out.println("Book Name   : " + b.getname());
        System.out.println("Author      : " + b.getauth());
        System.out.println("Publisher   : " + b.getpubl());
	

	}}