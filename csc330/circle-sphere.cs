using System;

// Circle class (Base class)
public class Circle {
    private int x, y;
    private double rad;

    public Circle(int X, int Y, double R)
    {
        x = X;
        y = Y;
        rad = R;
    }

    public int X {
        get { return x; }
        set { x = value; }
    }
    public int Y {
        get { return y; }
        set { y = value; }
    }
    public double Rad {
        get { return rad; }
        set { rad = value; }
    }

    public virtual double Area() {
       return Math.PI * Math.Pow(rad, 2);
    }

    public void print() {
        System.Console.WriteLine("x: " + x + ", y: " + y + ", rad: " + rad);
    }
}

public class Sphere : Circle {

    private int z;

    public int Z {
        get { return z; }
        set { z = value; }
    }

    // default constructor
    public Sphere() : base(0,0,0){ z = 0; }

    // general constructor
    public Sphere(int X, int Y, int Z, double R) : base(X,Y,R){ z = Z; }

    // return surface area
    public override double Area() {
        return 4 * base.Area();
    }
    public double volume()
    {
       return (4/3) * base.Area() * Rad;
    }

    public void print() {
        System.Console.WriteLine("x: " + X + ", y: " + Y + ", z: " + Z + ", rad: " + Rad);
    }

}

static class Program
{
    static void Main()
    {
        Circle c = new Circle(3, 4, 4.1);
        Sphere s = new Sphere(3,4,5,4.1);

        // call circle methods
        // ===================

        System.Console.WriteLine("Calling circle methods:");
        // getters
        System.Console.WriteLine(c.X);
        System.Console.WriteLine(c.Y);
        System.Console.WriteLine(c.Rad);

        System.Console.WriteLine(c.Area());
        c.print();

        System.Console.WriteLine("");

        // call sphere methods
        // ===================

        System.Console.WriteLine("Calling sphere methods:");
        // getters
        System.Console.WriteLine(s.X);
        System.Console.WriteLine(s.Y);
        System.Console.WriteLine(s.Z);
        System.Console.WriteLine(s.Rad);

        System.Console.WriteLine(s.Area());
        System.Console.WriteLine(s.volume());
        s.print();

    }
}