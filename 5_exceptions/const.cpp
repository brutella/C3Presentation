class Rectangle{
public:
	int x;
	static const Rectangle* const createNew(const Rectangle* const rect){
		rect = &Rectangle();
		return rect;
	}
};
int main(){
	Rectangle rect1;
	const Rectangle* const rect2 = Rectangle::createNew(&rect1);
	rect2->x = 0; // const Rectangle
	rect2 = &rect3; // Rectangle* const
}