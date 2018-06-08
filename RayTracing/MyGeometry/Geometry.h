#ifndef GEOMETRY_H
#define GEOMETRY_H


class Ray;

class Geometry
{
public:
	Geometry();
	Geometry(const Geometry &object);
	~Geometry();

	virtual bool hit(const Ray &ray, double t);

private:

};

#endif
