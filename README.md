# Vector2D

Source code for a 2D vector library (.lib and .dll).

## How to use
- Navigate to the Vector2 folder.
- Navigate to the x64 folder.
- Navigate to the release folder.
- Extract the .dll and .lib file.
- Return to the Vector2 folder.
- Navigate to the next Vector2 folder.
- Extract Vector2.h file.

## Constructor Methods
### Default Constructor
Vector2() : x(0), y(0)<br />
The Default constructor initialises the x and y variables to the value of 0.

### Overload Constructor 1
Vector2(T vx, T vy) : x(vx), y(vy)<br />
This overload constructor allows you to individually assign values to the x and y variables.

### Overload Constructor 2
Vector2(const Vector2& v) : x(v.x), y(v.y)<br />
This overload constructor allows you to assign the variables to an existing Vector2 object.

## Operator Methods
### = Operator
Vector2& operator=(const Vector2& v)<br />
This operator takes the x and y values of the Vector2 parameter and assigns it to the x and y values of
this Vector2 object.

### + Operator
Vector2 operator+(const Vector2& r)<br />
This operator adds the x and y values of two Vector2 objects and returns a new Vector2 object.

### - Operator
Vector2 operator-(const Vector2& r)<br />
This operator subtracts the values of 'r' from the Vector2 object on the left.

### / Operator
Vector2 operator/(const Vector2& r)<br/>
This operator divides the vector on the left by the vector on the right and returns a new Vector2
object.

### * Operator
Vector2 operator*(const Vector2& r)<br />
This operator multiplies the vector on the left by the vector on the right and returns a new Vector2
object.

### * Operator
Vector2 operator*(const float r)<br />
This operator multiplies the x and y values of a vector by r, a floating point number and returns
a new Vector2 object.

### += Operator
Vector2 operator+=(const Vector2& r)<br />
This operator adds the vector on the right to the vector on the left and assigns the vector on the left
the new values.

### -= Operator
Vector2& operator-=(const Vector2& r)<br />
This operator subtracts the vector on the right from the vector on the left and assigns the vector
on the left the new values.

### /= Operator
Vector2& operator/=(const Vector2& r)<br />
This operator divides the vector on the right from the vector on the right and assigns the vector
on the left the new values.

### *= Operator
Vector2& operator*=(const Vector2& r)<br />
This operator multiples the vector on the left by the vector on the right and assigns the vector
on the left the new values.

### *= Operator
Vector2& operator*=(const float r)<br />
This operator multiplies the x and y values of a vector by r, a floating point number and assigns
the vector the new values.

### == Operator
bool operator==(const Vector2& r)<br />
This operator compares the left vector to the right vector and returns a bool statement, true if
they are equal or false if they are not equal.

### != Operator
bool operator!=(const Vector2& r)<br />
This operator compares the left vector to the right vector and returns a bool statement, true if
they are not equal or false if they are equal.

## Functions
### Normalise
Vector2& Normalise()<br />
This function normalises the vector and sets its values to the normalised values.

### Magnitude
float Magnitude()<br />
This function calculates the size of vector and returns a floating point number.

## Predefined Types
### Vector2i
Vector2 object that stores the x and y variables as integers.

### Vector2f
Vector2 object that stores the x and y variables as floating point numbers.

### Vector2d
Vector2 object that stores the x and y variables as doubles.
