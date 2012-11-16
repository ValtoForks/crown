/*
Copyright (c) 2012 Daniele Bartolini, Simone Boscaratto

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#include "Types.h"
#include "Widget.h"
#include "Str.h"
#include "Font.h"

namespace Crown
{

enum LabelHorizontalAlign
{
	LHA_LEFT,
	LHA_CENTER,
	LHA_RIGHT
};

enum LabelVerticalAlign
{
	LVA_TOP,
	LVA_CENTER,
	LVA_BOTTOM
};


class Label: public Widget
{
public:
	Label(Widget* parent, Str text = "");
	virtual ~Label();

	void SetText(Str value);
	virtual void OnDraw(DrawingClipInfo& clipInfo);

	inline void SetHorizontalAlign(LabelHorizontalAlign value)
	 { mHorizontalAlign = value; }

	inline void SetVerticalAlign(LabelVerticalAlign value)
	 { mVerticalAlign = value; }

	virtual void OnSetProperty(const Str& name);

	virtual Str ToStr() const
	 { return "Label"; }

private:
	Str mText;
	Point32_t2 mTextSize;
	Font* mFont;
	LabelHorizontalAlign mHorizontalAlign;
	LabelVerticalAlign mVerticalAlign;

	void CalculateTextDimensions();
};

} //namespace Crown
