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

#include "config.h"


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFEBlendElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEBlendElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFEBlendElementTableEntries[] =
{
    { "in2", JSSVGFEBlendElement::In2AttrNum, DontDelete|ReadOnly, 0, 0 },
    { "width", JSSVGFEBlendElement::WidthAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "mode", JSSVGFEBlendElement::ModeAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEBlendElementTableEntries[10] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "in1", JSSVGFEBlendElement::In1AttrNum, DontDelete|ReadOnly, 0, &JSSVGFEBlendElementTableEntries[11] },
    { "height", JSSVGFEBlendElement::HeightAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "result", JSSVGFEBlendElement::ResultAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "x", JSSVGFEBlendElement::XAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "y", JSSVGFEBlendElement::YAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEBlendElementTableEntries[12] },
    { "className", JSSVGFEBlendElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEBlendElementTableEntries[13] },
    { "style", JSSVGFEBlendElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFEBlendElementTable = 
{
    2, 14, JSSVGFEBlendElementTableEntries, 10
};

/* Hash table for prototype */

static const HashEntry JSSVGFEBlendElementPrototypeTableEntries[] =
{
    { "SVG_FEBLEND_MODE_NORMAL", WebCore::SVG_FEBLEND_MODE_NORMAL, DontDelete|ReadOnly, 0, &JSSVGFEBlendElementPrototypeTableEntries[6] },
    { "SVG_FEBLEND_MODE_UNKNOWN", WebCore::SVG_FEBLEND_MODE_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_FEBLEND_MODE_MULTIPLY", WebCore::SVG_FEBLEND_MODE_MULTIPLY, DontDelete|ReadOnly, 0, &JSSVGFEBlendElementPrototypeTableEntries[7] },
    { "SVG_FEBLEND_MODE_SCREEN", WebCore::SVG_FEBLEND_MODE_SCREEN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FEBLEND_MODE_DARKEN", WebCore::SVG_FEBLEND_MODE_DARKEN, DontDelete|ReadOnly, 0, &JSSVGFEBlendElementPrototypeTableEntries[8] },
    { "SVG_FEBLEND_MODE_LIGHTEN", WebCore::SVG_FEBLEND_MODE_LIGHTEN, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFEBlendElementPrototypeTable = 
{
    2, 9, JSSVGFEBlendElementPrototypeTableEntries, 6
};

const ClassInfo JSSVGFEBlendElementPrototype::info = { "SVGFEBlendElementPrototype", 0, &JSSVGFEBlendElementPrototypeTable, 0 };

JSObject* JSSVGFEBlendElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFEBlendElementPrototype>(exec, "[[JSSVGFEBlendElement.prototype]]");
}

bool JSSVGFEBlendElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEBlendElementPrototype, JSObject>(exec, &JSSVGFEBlendElementPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGFEBlendElementPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSSVGFEBlendElement::info = { "SVGFEBlendElement", &JSSVGElement::info, &JSSVGFEBlendElementTable, 0 };

JSSVGFEBlendElement::JSSVGFEBlendElement(ExecState* exec, SVGFEBlendElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFEBlendElementPrototype::self(exec));
}

bool JSSVGFEBlendElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEBlendElement, JSSVGElement>(exec, &JSSVGFEBlendElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEBlendElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->in1Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case In2AttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->in2Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ModeAttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedEnumeration> obj = imp->modeAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedEnumeration>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedEnumeration>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedEnumeration>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case XAttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case YAttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case WidthAttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case HeightAttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ResultAttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ClassNameAttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case StyleAttrNum: {
        SVGFEBlendElement* imp = static_cast<SVGFEBlendElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)