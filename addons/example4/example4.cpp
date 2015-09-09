#include <nan.h>
#include <node.h>
#include <math.h>

using namespace v8;

NAN_METHOD(crunch) {
  double n = floor(133.7 / 3.14159265359);
  info.GetReturnValue().Set(Nan::New<Number>(n));
}

NAN_MODULE_INIT(init) {
  Nan::Set(target,
    Nan::New("crunch").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(crunch)).ToLocalChecked());
}

NODE_MODULE(example4, init)
