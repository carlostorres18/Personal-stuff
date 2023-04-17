// 1. definition (define what the class is)
// keyword "Class"
class Cat{
    public:
        // attributes or "members"
        string name;
        string color;
        float age;
        string mood;

        // methods (functions of the class)
        // specify which cat is meowing by displaying their name
        // Dont re-declare attributes in methods!!
        void meow(){
            cout<<name<<": *meow!*"<<endl;
        }

        // define a method feed() that will change cat mood to "Happy"
        void feed(){
            mood = "Happy";
            cout<<name<<" is: "<<mood<<endl;
        }

        // define a method birthday() that will increment the cat's age
            // and set the mood to "Hungry"
            // Print a confimartion message, show the new age
            // and mood of the cat, by name
        void birthday(){
            age += 1;
            mood = "Hungry";
            cout<<name<<" is now "<<age<<" years old"<<endl;
            cout<<"Also, please feed "<<name<<endl;
        }

        // Constructor method
        // Constructor runs automatically when the object is declared
        // NOTE #1: Constructors do not return anything!
            // They have *NO* return type!
        // NOTE #2: The name of the construcor function...
            // is the SAME NAME as the class
        Cat(){
            cout<<"a new cat has been declared!"<<endl;
        }
};



// 2. Declaration (declare the object)

// 3. Access (you wanna use the object, make it do something, you do that in Access)