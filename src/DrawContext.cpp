// Copyright (c) Shinya Ishikawa. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "DrawContext.h"
namespace m5avatar {

// DrawContext
DrawContext::DrawContext(Expression expression, float breath)
: expression{expression}, breath{breath}
{}

const Expression DrawContext::getExpression()
{
  return expression;
}

const float DrawContext::getBreath()
{
  return breath;
}

}
