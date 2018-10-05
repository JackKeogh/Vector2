# Vector2D

Source code for a 2D vector library (.lib and .dll).

## Constructor Methods
### Default Constructor
Vector2() : x(0), y(0)
The Default constructor initialises the x and y variables to the value of 0.

### Overload Constructor 1
Vector2(T vx, T vy) : x(vx), y(vy)
This overload constructor allows you to individually assign values to the x and y variables.

### Overload Constructor 2
Vector2(const Vector2& v) : x(v.x), y(v.y)
This overload constructor allows you to assign the variables to an existing Vector2 object.