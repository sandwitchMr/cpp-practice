#include <iostream>

class Vector
{
public:
	Vector()
	{
		mX = 0;
		mY = 0;
	}

	Vector(double x, double y)
	{
		mX = x;
		mY = y;
	}

	double getX() const
	{
		return mX;
	}

	double getY() const
	{
		return mY;
	}

	Vector operator+(const Vector pt)
	{
		return Vector(mX + pt.mX, mY + pt.mY);
	}

	Vector operator*(const double scale)
	{
		return Vector(mX * scale, mY * scale);
	}

	friend std::ostream &operator<<(std::ostream &os, const Vector &vec)
	{
		os << "(" << vec.getX() << ", " << vec.getY() << ")";
		return os;
	}

private:
	double mX;
	double mY;
};

int main()
{
	Vector vec1(1, 1);
	Vector vec2(4, 5);
	std::cout << "Sum " << vec1 << " and " << vec2 << " = " << vec1 + vec2 << std::endl;
	std::cout << "Multiple " << vec1 << " with 2 = " << vec1 * 2 << std::endl;
}