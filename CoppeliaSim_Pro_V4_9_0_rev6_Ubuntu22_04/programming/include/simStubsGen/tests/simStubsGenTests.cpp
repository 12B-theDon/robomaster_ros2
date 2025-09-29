#include <simPlusPlus/Plugin.h>
#include "stubs.h"
#include <cmath>
#include <optional>
// (필요하다면) boost optional을 로그 출력 등에 쓰는 경우만 유지
// #include <boost/optional/optional_io.hpp>

class Plugin : public sim::Plugin
{
public:
    int verbosityFromString(const std::string &s)
    {
        if(s == "none")       return sim_verbosity_none;
        if(s == "errors")     return sim_verbosity_errors;
        if(s == "warnings")   return sim_verbosity_warnings;
        if(s == "loadinfos")  return sim_verbosity_loadinfos;
        if(s == "questions")  return sim_verbosity_questions;
        if(s == "scripterrors")   return sim_verbosity_scripterrors;
        if(s == "scriptwarnings") return sim_verbosity_scriptwarnings;
        if(s == "scriptinfos")    return sim_verbosity_scriptinfos;
        if(s == "msgs")       return sim_verbosity_msgs;
        if(s == "infos")      return sim_verbosity_infos;
        if(s == "debug")      return sim_verbosity_debug;
        if(s == "trace")      return sim_verbosity_trace;
        if(s == "tracelua")   return sim_verbosity_tracelua;
        if(s == "traceall")   return sim_verbosity_traceall;
        if(s == "default")    return sim_verbosity_default;
        return sim_verbosity_useglobal;
    }

    void onStart()
    {
        if(!registerScriptStuff())
            throw std::runtime_error("failed to register script stuff");

        setExtVersion("simStubsGen tests");

        // 이전 버전 API(setModuleInfo 등)는 사용하지 않음
    }

    void onFirstInstancePass(const sim::InstancePassFlags &flags)
    {
        (void)flags; // 현재는 별도 동작 없음
        // 필요 시 여기서 파라미터를 읽어 로깅 레벨 등 처리 가능
        // auto v = sim::getNamedStringParam("simStubsGenTests.verbosity");
        // if(v) { /* 새 API에 맞춰 처리 */ }
    }

    void basic(basic_in *in, basic_out *out)
    {
        out->i  = in->i;
        out->f  = in->f;
        out->d  = in->d;
        out->s  = in->s;
        out->b  = in->b;
        out->ti = in->ti;
        out->z  = in->z;

        sim::addLog(sim_verbosity_debug, "basic: i=%d", in->i);
        sim::addLog(sim_verbosity_debug, "basic: f=%f", in->f);
        sim::addLog(sim_verbosity_debug, "basic: d=%f", in->d);
        sim::addLog(sim_verbosity_debug, "basic: b=%d", in->b);
        sim::addLog(sim_verbosity_debug, "basic: s=%s", in->s.c_str());
        sim::addLog(sim_verbosity_debug, "basic: ti=<%zu values>", in->ti.size());
        sim::addLog(sim_verbosity_debug, "basic: z=%p", static_cast<const void*>(&in->z));
    }

    void nullable(nullable_in *in, nullable_out *out)
    {
        if(in->i)  out->i  = in->i;
        if(in->f)  out->f  = in->f;
        if(in->d)  out->d  = in->d;
        if(in->s)  out->s  = in->s;
        if(in->b)  out->b  = in->b;
        if(in->ti) out->ti = in->ti;
        if(in->z)  out->z  = in->z;

        sim::addLog(sim_verbosity_debug, "nullable: i=%d",   in->i  ? *in->i  : 0);
        sim::addLog(sim_verbosity_debug, "nullable: f=%f",   in->f  ? *in->f  : 0.0f);
        sim::addLog(sim_verbosity_debug, "nullable: d=%f",   in->d  ? *in->d  : 0.0);
        sim::addLog(sim_verbosity_debug, "nullable: b=%d",   in->b  ? (*in->b ? 1 : 0) : 0);
        sim::addLog(sim_verbosity_debug, "nullable: s=%s",   in->s  ? in->s->c_str() : "(null)");
        sim::addLog(sim_verbosity_debug, "nullable: ti=<%zu values>", in->ti ? in->ti->size() : 0);
        sim::addLog(sim_verbosity_debug, "nullable: z=%p",
                    in->z ? static_cast<const void*>(&(*in->z)) : nullptr);
    }

    void struct_table(struct_table_in *in, struct_table_out *out)
    {
        if(in->s == "i") out->i = in->tz.at(in->i).i;
        if(in->s == "f") out->f = in->tz.at(in->i).f;
        if(in->s == "d") out->d = in->tz.at(in->i).d;
        if(in->s == "s") out->s = in->tz.at(in->i).s;
        if(in->s == "b") out->b = in->tz.at(in->i).b;
    }

    void test_struct2(test_struct2_in *in, test_struct2_out *out)
    {
        out->i   = in->a.i;
        out->in  = in->a.in;
        out->id  = in->a.id;
        out->idn = in->a.idn;              // 먼저 입력 그대로 복사
        if(in->a.i < 0) out->idn = std::nullopt; // 조건 시 비우기
    }

    void struct_default(struct_default_in *in, struct_default_out *out)
    {
        out->z = in->z;
    }

    void test_grid(test_grid_in *in, test_grid_out *out)
    {
        for(const auto &x : in->a.dims)
            out->a.dims.push_back(x);
        for(const auto &x : in->a.data)
            out->a.data.push_back(2 * x);
    }

    void test_grid2(test_grid2_in *in, test_grid2_out *out)
    {
        (void)in; (void)out;
    }
};

#define PLUGIN_NAME "StubsGenTests"
#define PLUGIN_VERSION 1
SIM_PLUGIN(Plugin)
#include "stubsPlusPlus.cpp"
