/*
 *
 * Copyright (c) 2014 Nguyen Thai Duong
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef _CCB_CCPHYSICSNODELOADER_H_
#define _CCB_CCPHYSICSNODELOADER_H_

#include "CCNodeLoader.h"
#include "CCPhysicsNode.h"

namespace spritebuilder {

/* Forward declaration. */
class CCBReader;

class PhysicsNodeLoader : public NodeLoader {
public:
    /**
     * @js NA
     * @lua NA
     */
    virtual ~PhysicsNodeLoader() {};
    /**
     * @js NA
     * @lua NA
     */
    SB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(PhysicsNodeLoader, loader);

protected:
    SB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(cocos2d::PhysicsNode);


    virtual void onHandlePropTypePoint(cocos2d::Node * pNode, cocos2d::Node * pParent, const char* pPropertyName, cocos2d::Point pPoint, CCBReader * ccbReader);
};

}

#endif