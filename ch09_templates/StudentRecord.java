package ch09_templates;

public class StudentRecord<T> {
    private final int size = 5;
    private T grade;
    private int studentId;

    public StudentRecord(T input) {
        grade = input;
    }

    public void setId(int idIn) {
        studentId = idIn;
    }

    public void printGrades() {
        System.out.println("ID# " + studentId + ": " + grade + "\n ");
    }

    public static void main(String[] args) {
        // StudentRecord is the generic class
        // The constructor sets the grade value
        StudentRecord<Integer> srInt = new StudentRecord<>(3);
        srInt.setId(111111);
        srInt.printGrades();

        StudentRecord<Character> srChar = new StudentRecord<>('B');
        srChar.setId(222222);
        srChar.printGrades();

        StudentRecord<Float> srFloat = new StudentRecord<>(3.333f);
        srFloat.setId(333333);
        srFloat.printGrades();

        StudentRecord<String> srString = new StudentRecord<>("B-");
        srString.setId(4444);
        srString.printGrades();
    }
}
