#include <nan.h>
#include <node.h>

using namespace v8;

NAN_METHOD(helloMethod) {
  info.GetReturnValue().Set(Nan::New("world").ToLocalChecked());
}

NAN_MODULE_INIT(init) {
  Nan::Set(target,
    Nan::New("hello").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(helloMethod)).ToLocalChecked());
}

NODE_MODULE(example2, init)
