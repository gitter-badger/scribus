/*
    Copyright (C)  2010  Brad Hards <bradh@frogmouth.net>

    This library is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 2.1 of the License, or
    (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RTFREADER_TOKEN_H
#define RTFREADER_TOKEN_H

#include <QByteArray>
#include <QString>
namespace RtfReader
{
    enum TokenType { OpenGroup, CloseGroup, Control, Plain, Binary };

    /**
      RTF token
      */
	class Token {
      public: /* TODO: convert to getters / setters */
	void dump() const;
	TokenType type;
	QByteArray name;
	bool hasParameter;
	QString parameter;
	QByteArray binaryData;
    };
}

#endif
