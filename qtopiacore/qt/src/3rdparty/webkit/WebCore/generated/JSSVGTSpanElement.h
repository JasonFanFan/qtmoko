/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSVGTSpanElement_H
#define JSSVGTSpanElement_H


#if ENABLE(SVG)

#include "JSSVGTextPositioningElement.h"

namespace WebCore {

class SVGTSpanElement;

class JSSVGTSpanElement : public JSSVGTextPositioningElement {
public:
    JSSVGTSpanElement(KJS::ExecState*, SVGTSpanElement*);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;

};


class JSSVGTSpanElementPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState* exec);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;
    JSSVGTSpanElementPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSSVGTextPositioningElementPrototype::self(exec)) { }
};

} // namespace WebCore

#endif // ENABLE(SVG)

#endif