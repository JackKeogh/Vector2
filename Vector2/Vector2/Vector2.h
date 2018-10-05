///<summary>
/// Vector2 is a template class. 
/// Its use is to handle two variables
/// of type T in the form of coordinate
/// geometry. The ideal variable types
/// are int, float and double. They're
/// types are defined as Vector2I/F/D.
///</summary>
///<Date>
/// 05/10/2018
///</Date>
///<author>
/// Jack Keogh.
///</author>


namespace jk
{
	template <class T>
	struct Vector2
	{
		// variables
		T x;
		T y;


	};

	typedef Vector2<int> Vector2I;
	typedef Vector2<float> Vector2F;
	typedef Vector2<double> Vector2D;
}