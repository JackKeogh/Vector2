# Vector2D

Source code for a 2D vector library (.lib and .dll).

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
Vector2 operator+(const Vector2 r)<br />
This operator adds the x and y values of two Vector2 objects and returns a new Vector2 object.

### - Operator
Vector2 operator-(const Vector2 r)<br />
This operator subtracts the values of 'r' from the Vector2 object on the left.