module Piece;

import <format>;

namespace quarto
{
	Piece::Piece(Body body, Color color, Height height, Shape shape) :
		m_body{ body },
		m_color{ color },
		m_height{ height },
		m_shape{ shape }
	{
	}

	Piece::Body Piece::GetBody() const
	{
		return m_body;
	}

	Piece::Color Piece::GetColor() const
	{
		return m_color;
	}

	Piece::Height Piece::GetHeight() const
	{
		return m_height;
	}

	Piece::Shape Piece::GetShape() const
	{
		return m_shape;
	}

	std::ostream& quarto::operator<<(std::ostream& os, const Piece& piece)
	{
		os << std::format("{}{}{}{}",
			static_cast<int8_t>(piece.GetBody()),
			static_cast<int8_t>(piece.GetColor()),
			static_cast<int8_t>(piece.GetHeight()),
			static_cast<int8_t>(piece.GetShape())
		);

		return os;
	}
}