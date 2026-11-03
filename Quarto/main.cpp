import <print>;
import <iostream>;
import Piece;

int main()
{
	using quarto::Piece;

	using enum Piece::Body;
	using enum Piece::Color;
	using enum Piece::Height;
	using enum Piece::Shape;

	Piece piece{ Hollow, White, Tall, Round };

	std::cout << piece << "\n";
}