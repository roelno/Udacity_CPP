package ch09_templates;

public class JavaGenerics {
    // Our generic method
    public static <T extends Comparable<T>> T findSmaller(T input1, T input2) {
        if (input1.compareTo(input2) < 0) {
            return input1;
        } else {
            return input2;
        }
    }

    public static void main(String[] args) {
        int a = 54;
        int b = 89;
        float f1 = 7.8f;
        float f2 = 9.1f;
        char c1 = 'f';
        char c2 = 'h';
        String s1 = "Hello";
        String s2 = "Bots are fun";

        // Wow! We can use one method for different variable types
        System.out.println("\nIntegers compared: " + findSmaller(a, b));
        System.out.println("Floats compared: " + findSmaller(f1, f2));
        System.out.println("Chars compared: " + findSmaller(c1, c2));
        System.out.println("Strings compared: " + findSmaller(s1, s2));
    }
}


/* 
In this Java code:

The <T extends Comparable<T>> part is similar to the template declaration in C++.
It indicates that the method findSmaller takes a type parameter T that must be a
subtype of Comparable<T>. This allows you to use the compareTo method to compare
objects of type T.

Inside the findSmaller method, you can see that we're using compareTo to compare
objects of type T. This is possible because we've constrained the type parameter
T to be Comparable<T>.

So, Java's generics allow you to create generic methods and classes, making your
code more flexible and reusable, similar to C++ templates.
 */


/* Question‼️ : in c++ code, I didn't see something similar to extends Comparable<T>
 * 
 * The C++ code uses a simpler approach to create a generic function using 
 * templates without constraints.
 * 
 * In C++, when you define a template function like this:
 * template <typename T> T findSmaller(T input1, T input2);
 * 
 * There are no constraints on the type T, meaning it can be any type that supports
 * the comparison operators (e.g., <, >, ==, etc.). C++ relies on the availability
 * of the comparison operators for the types used with the template.
 * 
 * In contrast, Java uses bounded type parameters with the extends keyword to 
 * enforce that the type parameter T must be a subtype of Comparable<T>. 
 * This constraint ensures that the compareTo method can be used on objects of
 * type T within the generic method.

 */