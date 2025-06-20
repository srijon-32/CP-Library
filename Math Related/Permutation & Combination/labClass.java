
class Person {
    protected String name;
    protected int age;


    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void showPersonInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class Student extends Person {
    private int batch;
    private String department;
    private String college;

    public Student(String name, int age, int batch, String department, String college) {
        super(name, age);  
        this.batch = batch;
        this.department = department;
        this.college = college;
    }

    
    public void showStudentInfo() {
        showPersonInfo();
        System.out.println("Batch: " + batch);
        System.out.println("Department: " + department);
        System.out.println("College: " + college);
    }
}

public class labClass {
    public static void main(String[] args) {
        Student student = new Student("Srijon Samanta", 22, 16, "CSE", "Sylhet Engineering College");
        student.showStudentInfo();
    }
}
