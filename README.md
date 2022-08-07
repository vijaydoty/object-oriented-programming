# Object Oriented Programming

**A PIE** (Abstraction, Polymorphism, Inheritance, Encapsulation)

1. Basics - OOP, class, object, constructors, destructors
2. Inheritance
3. Polymorphism - static, dynamic

Why do we need OOP?
Standard mechanism to 
- structure the code
- relate to real world entities

If we use OOP then code will be 
* **Transparent** - easy to read
* **Maintainable** - easy to test & fix things
* **Extensible** - add new features quickly
* **Reusable** - ability to reuse code

---
**Object** has
1. attributes, data, properties, fields
2. behaviours, methods


**Class** - template, blueprint, user defined datatype
```
Bank Account  -> Class Name
-------------  
-account_no   -> attributes
-balance
-------------
+withdraw()   -> methods
+deposit()
```

---
```
class Cookie {
    string type;
    int price;
public:
    Cookie(string type, int price) {
        this->type = type;
        this->price = price;
    }
}

class CookieJar {
    int numCookies;
    int capacity;
    vector<Cookie> data;
public:
    CookieJar(){
        numCookies = 0;
        capacity = 100;
    }
    
    CookieJar(int count) {
        numCookies = count;
        capacity = 100;
    }
    
    void addCookie(Cookie ck) {
        if(numCookies != capacity)
            data.push_back(ck);
    }
    
    int getNumCookies() {
        return numCookies;
    }
    
    Cookie requestCookie(){
        Cookie ck("Badam", 5);
        return ck;
    }
};

CookieJar j1;
```

Difference between function and method/
function - independent function, can be called independently e.g. s.length()
method - a function of a class, cannot be called without class/creating objec e.g. max(a,b)

Constructor : allocates memory and initializes
1. same name as class
2. no return type
3. can be public (if you want to allow anyone to create it's object) or private

Default constructor auto created if we don't create one.
If we create a parameterized constructor, default constructor is not automatically created

**Abstraction**: hiding data <br>
**Encapsulation**: binding the member data with the methods 


Test t2; // stack space, during compile time itself <br>
Test *t3 = new Test(); // heap space, during run time

**`IS A`** indicates we can use inheritance <br>
**`HAS A`** <br>

---
`Java`
- Class having abstract method will be abstract 
- Abstract Class may or may not have abstract method
- A derived class can inherit only one base class, but can implements any number of interfaces
- we cannot create object of Abstract class

---
`C++`
- static methods can only access static variables
- non-static methods can access static variables
- static variable must be initialized outside the class as it exists without the existence of any object
- `abstract method` &#8594; `virtual returnType methodName() = 0;`
- `interfaces`: class with only the abstract methods &#8594; i.e. all `virtual returnType methodName() = 0;`

---
The `final` keyword is used to prevent a class from being inherited and to prevent inherited method from being overridden.
- `Abstract Class` &#8594; no object created from it
- `Abstract Method`

- `Final Class` &#8594; no classes inherited from it
<br>
Use these keywords to better communicate intentions
<br>
