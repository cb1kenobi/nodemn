#include <nan.h>

using namespace v8;

class MyObject : public Nan::ObjectWrap {
public:
  static NAN_MODULE_INIT(Init) {
    Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(MyObject::New);
    tpl->SetClassName(Nan::New("MyObject").ToLocalChecked());
    tpl->InstanceTemplate()->SetInternalFieldCount(1);

    SetPrototypeMethod(tpl, "hello", Hello);

    Nan::Set(target, Nan::New("MyObject").ToLocalChecked(), tpl->GetFunction());
  }

protected:
  static NAN_METHOD(New) {
      MyObject *obj = new MyObject();
      obj->Wrap(info.This());
      info.GetReturnValue().Set(info.This());
  }

  static NAN_METHOD(Hello) {
    info.GetReturnValue().Set(Nan::New("world").ToLocalChecked());
  }
};

NAN_MODULE_INIT(init) {
  MyObject::Init(target);
}

NODE_MODULE(example3, init)
