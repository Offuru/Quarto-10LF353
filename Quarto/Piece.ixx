export module Piece;

import <cstdint>;
import <iostream>;

namespace quarto
{
	export class Piece
	{
	public:
		enum class Body : uint8_t
		{
			Hollow,
			Full
		};

		enum class Color : uint8_t
		{
			Black,
			White
		};

		enum class Height : uint8_t
		{
			Short,
			Tall
		};

		enum class Shape : uint8_t
		{
			Square,
			Round
		};

	public:
		Piece(Body body, Color color, Height height, Shape shape);

		Piece(const Piece& piece) = delete;
		Piece& operator= (const Piece& piece) = delete;

		Piece(Piece&& piece) noexcept = default;
		Piece& operator=(Piece&& piece) noexcept = default;

		Body GetBody() const;
		Color GetColor() const;
		Height GetHeight() const;
		Shape GetShape() const;

	private:

		Body m_body : 1;
		Color m_color : 1;
		Height m_height : 1;
		Shape m_shape : 1;
	};

	export std::ostream& operator<<(std::ostream& os, const Piece& piece);
};