/* Generated code for Python module 'gui'
 * created by Nuitka version 0.9.3
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_gui" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gui;
PyDictObject *moduledict_gui;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[185];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[185];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("gui"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 185; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gui(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 185; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bbe304962055ce60a5060f4ec3f478ec;
static PyCodeObject *codeobj_7509c64846810b1d5cfeb57fd5ac8270;
static PyCodeObject *codeobj_27a0c76afce0e71732c204abcfd3bce9;
static PyCodeObject *codeobj_a614ec54119295e2b91c015858a0feda;
static PyCodeObject *codeobj_7c7210d1163a4a7121fe8b7b4bd4e300;
static PyCodeObject *codeobj_7740010d450e2e04d5c1b18f1d183d2e;
static PyCodeObject *codeobj_bf0a4d068adb5a8251699a264a487350;
static PyCodeObject *codeobj_11fa8bb8a4df2b2d298ccc136f7ab8d3;
static PyCodeObject *codeobj_842a65b899bf895a618c74c50604361e;
static PyCodeObject *codeobj_21fcfffb2945c11424ca22ed10fc01c6;
static PyCodeObject *codeobj_f0524a6ec36591612a9bade5b7106f40;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[178]); CHECK_OBJECT(module_filename_obj);
    codeobj_bbe304962055ce60a5060f4ec3f478ec = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[179], NULL, NULL, 0, 0, 0);
    codeobj_7509c64846810b1d5cfeb57fd5ac8270 = MAKE_CODEOBJECT(module_filename_obj, 14, CO_NOFREE, mod_consts[159], mod_consts[180], NULL, 0, 0, 0);
    codeobj_27a0c76afce0e71732c204abcfd3bce9 = MAKE_CODEOBJECT(module_filename_obj, 338, CO_NOFREE, mod_consts[171], mod_consts[180], NULL, 0, 0, 0);
    codeobj_a614ec54119295e2b91c015858a0feda = MAKE_CODEOBJECT(module_filename_obj, 354, CO_NOFREE, mod_consts[128], mod_consts[181], NULL, 1, 0, 0);
    codeobj_7c7210d1163a4a7121fe8b7b4bd4e300 = MAKE_CODEOBJECT(module_filename_obj, 339, CO_NOFREE, mod_consts[121], mod_consts[181], NULL, 1, 0, 0);
    codeobj_7740010d450e2e04d5c1b18f1d183d2e = MAKE_CODEOBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[182], NULL, 2, 0, 0);
    codeobj_bf0a4d068adb5a8251699a264a487350 = MAKE_CODEOBJECT(module_filename_obj, 348, CO_NOFREE, mod_consts[126], mod_consts[181], NULL, 1, 0, 0);
    codeobj_11fa8bb8a4df2b2d298ccc136f7ab8d3 = MAKE_CODEOBJECT(module_filename_obj, 351, CO_NOFREE, mod_consts[127], mod_consts[181], NULL, 1, 0, 0);
    codeobj_842a65b899bf895a618c74c50604361e = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], mod_consts[183], NULL, 2, 0, 0);
    codeobj_21fcfffb2945c11424ca22ed10fc01c6 = MAKE_CODEOBJECT(module_filename_obj, 342, CO_NOFREE, mod_consts[124], mod_consts[181], NULL, 1, 0, 0);
    codeobj_f0524a6ec36591612a9bade5b7106f40 = MAKE_CODEOBJECT(module_filename_obj, 345, CO_NOFREE, mod_consts[125], mod_consts[181], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_gui$$$function__1_setupUi();


static PyObject *MAKE_FUNCTION_gui$$$function__2_retranslateUi();


static PyObject *MAKE_FUNCTION_gui$$$function__3_refresh();


static PyObject *MAKE_FUNCTION_gui$$$function__4_type1();


static PyObject *MAKE_FUNCTION_gui$$$function__5_type2();


static PyObject *MAKE_FUNCTION_gui$$$function__6_return_func();


static PyObject *MAKE_FUNCTION_gui$$$function__7_run();


static PyObject *MAKE_FUNCTION_gui$$$function__8_pic();


// The module function definitions.
static PyObject *impl_gui$$$function__1_setupUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *var_icon = NULL;
    PyObject *var_sizePolicy = NULL;
    struct Nuitka_FrameObject *frame_842a65b899bf895a618c74c50604361e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_842a65b899bf895a618c74c50604361e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_842a65b899bf895a618c74c50604361e)) {
        Py_XDECREF(cache_frame_842a65b899bf895a618c74c50604361e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_842a65b899bf895a618c74c50604361e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_842a65b899bf895a618c74c50604361e = MAKE_FUNCTION_FRAME(codeobj_842a65b899bf895a618c74c50604361e, module_gui, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_842a65b899bf895a618c74c50604361e->m_type_description == NULL);
    frame_842a65b899bf895a618c74c50604361e = cache_frame_842a65b899bf895a618c74c50604361e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_842a65b899bf895a618c74c50604361e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_842a65b899bf895a618c74c50604361e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_1 = par_widget;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 16;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[1], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_2 = par_widget;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 17;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[2],
            &PyTuple_GET_ITEM(mod_consts[3], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_1 = par_widget;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 18;
        tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 18;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 19;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[9]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_icon == NULL);
        var_icon = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_icon);
        tmp_expression_value_2 = var_icon;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 20;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[11],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[9]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[14]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_6 = par_widget;
        CHECK_OBJECT(var_icon);
        tmp_args_element_value_5 = var_icon;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 21;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[15], tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_7 = par_widget;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 22;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_args_element_value_6 = par_widget;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 100;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[19], tmp_args_element_value_6);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[20]);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 101;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_9,
            mod_consts[21],
            &PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[20]);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 102;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[20]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 103;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        Py_DECREF(tmp_called_instance_11);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_args_element_value_7 = par_widget;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 104;
        tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[26], tmp_args_element_value_7);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[27], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_instance_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[27]);
        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 105;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        Py_DECREF(tmp_called_instance_13);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 106;
        tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[29]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[30], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[30]);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 107;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[31], 0)
        );

        Py_DECREF(tmp_called_instance_15);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[19]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[30]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 108;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[32], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[32]);
        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 109;
        tmp_call_result_12 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_16,
            mod_consts[21],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        Py_DECREF(tmp_called_instance_16);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[32]);
        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 110;
        tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_17,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_17);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[35]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[30]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 111;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[36], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[37]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[37]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[38]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[37]);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[39]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizePolicy == NULL);
        var_sizePolicy = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_18 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 113;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_19 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 114;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_19,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_23 = var_sizePolicy;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[42]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_called_instance_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[36]);
        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 115;
        tmp_called_instance_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[43]);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 115;
        tmp_args_element_value_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[44]);
        Py_DECREF(tmp_called_instance_20);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 115;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_called_instance_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[36]);
        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_13 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 116;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[45], tmp_args_element_value_13);
        Py_DECREF(tmp_called_instance_22);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[36]);
        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 117;
        tmp_call_result_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_23,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        Py_DECREF(tmp_called_instance_23);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_called_instance_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[36]);
        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 118;
        tmp_call_result_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_24,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[47], 0)
        );

        Py_DECREF(tmp_called_instance_24);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[32]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[48]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_30 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[36]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[49];
        tmp_args_element_value_16 = mod_consts[50];
        tmp_args_element_value_17 = mod_consts[51];
        tmp_args_element_value_18 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[35]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[30]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 120;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[52], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[37]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[37]);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[39]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[37]);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[53]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizePolicy;
            assert(old != NULL);
            var_sizePolicy = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_25 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 122;
        tmp_call_result_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_25,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_26 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 123;
        tmp_call_result_22 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_26,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_38 = var_sizePolicy;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[42]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_called_instance_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[52]);
        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 124;
        tmp_called_instance_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_28, mod_consts[43]);
        Py_DECREF(tmp_called_instance_28);
        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 124;
        tmp_args_element_value_22 = CALL_METHOD_NO_ARGS(tmp_called_instance_27, mod_consts[44]);
        Py_DECREF(tmp_called_instance_27);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 124;
        tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_23;
        CHECK_OBJECT(par_self);
        tmp_expression_value_40 = par_self;
        tmp_called_instance_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[52]);
        if (tmp_called_instance_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_23 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 125;
        tmp_call_result_24 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_29, mod_consts[45], tmp_args_element_value_23);
        Py_DECREF(tmp_called_instance_29);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_instance_30;
        CHECK_OBJECT(par_self);
        tmp_expression_value_42 = par_self;
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[52]);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[4]);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_30 == NULL)) {
            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 126;
        tmp_args_element_value_24 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_30,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 126;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_26;
        CHECK_OBJECT(par_self);
        tmp_expression_value_43 = par_self;
        tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[52]);
        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 127;
        tmp_call_result_26 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_31,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        Py_DECREF(tmp_called_instance_31);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_27;
        CHECK_OBJECT(par_self);
        tmp_expression_value_44 = par_self;
        tmp_called_instance_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[52]);
        if (tmp_called_instance_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 128;
        tmp_call_result_27 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_32,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        Py_DECREF(tmp_called_instance_32);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        CHECK_OBJECT(par_self);
        tmp_expression_value_46 = par_self;
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[32]);
        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[48]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_47 = par_self;
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[52]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[57];
        tmp_args_element_value_27 = mod_consts[50];
        tmp_args_element_value_28 = mod_consts[51];
        tmp_args_element_value_29 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_assattr_target_7;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[58]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_49 = par_self;
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[30]);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 130;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[59], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_instance_33;
        CHECK_OBJECT(par_self);
        tmp_expression_value_51 = par_self;
        tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[59]);
        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[4]);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 131;
        tmp_args_element_value_31 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_33,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 131;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_instance_34;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_30;
        CHECK_OBJECT(par_self);
        tmp_expression_value_52 = par_self;
        tmp_called_instance_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[59]);
        if (tmp_called_instance_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 132;
        tmp_call_result_30 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_34,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        Py_DECREF(tmp_called_instance_34);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_instance_35;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_31;
        CHECK_OBJECT(par_self);
        tmp_expression_value_53 = par_self;
        tmp_called_instance_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[59]);
        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 135;
        tmp_call_result_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_35,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        Py_DECREF(tmp_called_instance_35);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        CHECK_OBJECT(par_self);
        tmp_expression_value_55 = par_self;
        tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[32]);
        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[48]);
        Py_DECREF(tmp_expression_value_54);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_56 = par_self;
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[59]);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = mod_consts[57];
        tmp_args_element_value_34 = mod_consts[57];
        tmp_args_element_value_35 = mod_consts[51];
        tmp_args_element_value_36 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[62]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_58 = par_self;
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[30]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 137;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[63], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_expression_value_63;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[37]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[37]);
        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[39]);
        Py_DECREF(tmp_expression_value_60);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[37]);
        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[39]);
        Py_DECREF(tmp_expression_value_62);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizePolicy;
            assert(old != NULL);
            var_sizePolicy = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_call_result_33;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_36 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 139;
        tmp_call_result_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_36,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_34;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_37 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 140;
        tmp_call_result_34 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_37,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_called_instance_39;
        PyObject *tmp_expression_value_65;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_64 = var_sizePolicy;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[42]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_65 = par_self;
        tmp_called_instance_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[63]);
        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 141;
        tmp_called_instance_38 = CALL_METHOD_NO_ARGS(tmp_called_instance_39, mod_consts[43]);
        Py_DECREF(tmp_called_instance_39);
        if (tmp_called_instance_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 141;
        tmp_args_element_value_40 = CALL_METHOD_NO_ARGS(tmp_called_instance_38, mod_consts[44]);
        Py_DECREF(tmp_called_instance_38);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 141;
        tmp_call_result_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_instance_40;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_41;
        CHECK_OBJECT(par_self);
        tmp_expression_value_66 = par_self;
        tmp_called_instance_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[63]);
        if (tmp_called_instance_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_41 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 142;
        tmp_call_result_36 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_40, mod_consts[45], tmp_args_element_value_41);
        Py_DECREF(tmp_called_instance_40);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_instance_41;
        CHECK_OBJECT(par_self);
        tmp_expression_value_68 = par_self;
        tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[63]);
        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[4]);
        Py_DECREF(tmp_expression_value_67);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 143;
        tmp_args_element_value_42 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_41,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 143;
        tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_instance_42;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_call_result_38;
        CHECK_OBJECT(par_self);
        tmp_expression_value_69 = par_self;
        tmp_called_instance_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[63]);
        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 144;
        tmp_call_result_38 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_42,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[64], 0)
        );

        Py_DECREF(tmp_called_instance_42);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_instance_43;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(par_self);
        tmp_expression_value_70 = par_self;
        tmp_called_instance_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[63]);
        if (tmp_called_instance_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 147;
        tmp_call_result_39 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_43,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        Py_DECREF(tmp_called_instance_43);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_40;
        CHECK_OBJECT(par_self);
        tmp_expression_value_71 = par_self;
        tmp_called_instance_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[63]);
        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 148;
        tmp_call_result_40 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_44,
            mod_consts[66],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        Py_DECREF(tmp_called_instance_44);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        CHECK_OBJECT(par_self);
        tmp_expression_value_73 = par_self;
        tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[32]);
        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[48]);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_74 = par_self;
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[63]);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = mod_consts[57];
        tmp_args_element_value_45 = mod_consts[51];
        tmp_args_element_value_46 = mod_consts[51];
        tmp_args_element_value_47 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[58]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_76 = par_self;
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[30]);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 150;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[68], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_45;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_call_result_42;
        CHECK_OBJECT(par_self);
        tmp_expression_value_77 = par_self;
        tmp_called_instance_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[68]);
        if (tmp_called_instance_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 151;
        tmp_call_result_42 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_45,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        Py_DECREF(tmp_called_instance_45);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_expression_value_81;
        CHECK_OBJECT(par_self);
        tmp_expression_value_79 = par_self;
        tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[68]);
        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[70]);
        Py_DECREF(tmp_expression_value_78);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[71]);
        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[72]);
        Py_DECREF(tmp_expression_value_80);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 154;
        tmp_call_result_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_instance_46;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_44;
        CHECK_OBJECT(par_self);
        tmp_expression_value_82 = par_self;
        tmp_called_instance_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[68]);
        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 155;
        tmp_call_result_44 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_46,
            mod_consts[73],
            PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        Py_DECREF(tmp_called_instance_46);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_instance_47;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_call_result_45;
        CHECK_OBJECT(par_self);
        tmp_expression_value_83 = par_self;
        tmp_called_instance_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[68]);
        if (tmp_called_instance_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 156;
        tmp_call_result_45 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_47,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        Py_DECREF(tmp_called_instance_47);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        CHECK_OBJECT(par_self);
        tmp_expression_value_85 = par_self;
        tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[32]);
        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[48]);
        Py_DECREF(tmp_expression_value_84);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_86 = par_self;
        tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[68]);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = mod_consts[49];
        tmp_args_element_value_52 = mod_consts[57];
        tmp_args_element_value_53 = mod_consts[51];
        tmp_args_element_value_54 = mod_consts[50];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_call_result_46 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_assattr_target_10;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[76]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_88 = par_self;
        tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[30]);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 158;
        tmp_assattr_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[77], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_called_instance_48;
        CHECK_OBJECT(par_self);
        tmp_expression_value_90 = par_self;
        tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[77]);
        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[4]);
        Py_DECREF(tmp_expression_value_89);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 159;
        tmp_args_element_value_56 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_48,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 159;
        tmp_call_result_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_instance_49;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_call_result_48;
        CHECK_OBJECT(par_self);
        tmp_expression_value_91 = par_self;
        tmp_called_instance_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[77]);
        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 160;
        tmp_call_result_48 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_49,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        Py_DECREF(tmp_called_instance_49);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_instance_50;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_call_result_49;
        CHECK_OBJECT(par_self);
        tmp_expression_value_92 = par_self;
        tmp_called_instance_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[77]);
        if (tmp_called_instance_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 161;
        tmp_call_result_49 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_50,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        Py_DECREF(tmp_called_instance_50);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        CHECK_OBJECT(par_self);
        tmp_expression_value_94 = par_self;
        tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[32]);
        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[48]);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_95 = par_self;
        tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[77]);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = mod_consts[50];
        tmp_args_element_value_59 = mod_consts[57];
        tmp_args_element_value_60 = mod_consts[51];
        tmp_args_element_value_61 = mod_consts[50];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_call_result_50 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_assattr_target_11;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[35]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_97 = par_self;
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[30]);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 163;
        tmp_assattr_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[79], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_expression_value_102;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[37]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[37]);
        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[38]);
        Py_DECREF(tmp_expression_value_99);
        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_63);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[37]);
        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_63);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[39]);
        Py_DECREF(tmp_expression_value_101);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_63);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_63);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizePolicy;
            assert(old != NULL);
            var_sizePolicy = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_51;
        PyObject *tmp_call_result_51;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_51 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 165;
        tmp_call_result_51 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_51,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_instance_52;
        PyObject *tmp_call_result_52;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_52 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 166;
        tmp_call_result_52 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_52,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_called_instance_53;
        PyObject *tmp_called_instance_54;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_103 = var_sizePolicy;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[42]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_104 = par_self;
        tmp_called_instance_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[79]);
        if (tmp_called_instance_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 167;
        tmp_called_instance_53 = CALL_METHOD_NO_ARGS(tmp_called_instance_54, mod_consts[43]);
        Py_DECREF(tmp_called_instance_54);
        if (tmp_called_instance_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 167;
        tmp_args_element_value_65 = CALL_METHOD_NO_ARGS(tmp_called_instance_53, mod_consts[44]);
        Py_DECREF(tmp_called_instance_53);
        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 167;
        tmp_call_result_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_65);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_instance_55;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_value_66;
        CHECK_OBJECT(par_self);
        tmp_expression_value_105 = par_self;
        tmp_called_instance_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[79]);
        if (tmp_called_instance_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_66 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 168;
        tmp_call_result_54 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_55, mod_consts[45], tmp_args_element_value_66);
        Py_DECREF(tmp_called_instance_55);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_instance_56;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_55;
        CHECK_OBJECT(par_self);
        tmp_expression_value_106 = par_self;
        tmp_called_instance_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[79]);
        if (tmp_called_instance_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 169;
        tmp_call_result_55 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_56,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        Py_DECREF(tmp_called_instance_56);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_instance_57;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_call_result_56;
        CHECK_OBJECT(par_self);
        tmp_expression_value_107 = par_self;
        tmp_called_instance_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[79]);
        if (tmp_called_instance_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 170;
        tmp_call_result_56 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_57,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        Py_DECREF(tmp_called_instance_57);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        CHECK_OBJECT(par_self);
        tmp_expression_value_109 = par_self;
        tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[32]);
        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[48]);
        Py_DECREF(tmp_expression_value_108);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_110 = par_self;
        tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[79]);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = mod_consts[50];
        tmp_args_element_value_69 = mod_consts[50];
        tmp_args_element_value_70 = mod_consts[51];
        tmp_args_element_value_71 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_call_result_57 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_instance_58;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_call_result_58;
        CHECK_OBJECT(par_self);
        tmp_expression_value_111 = par_self;
        tmp_called_instance_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[32]);
        if (tmp_called_instance_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 172;
        tmp_call_result_58 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_58,
            mod_consts[81],
            &PyTuple_GET_ITEM(mod_consts[82], 0)
        );

        Py_DECREF(tmp_called_instance_58);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_instance_59;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(par_self);
        tmp_expression_value_112 = par_self;
        tmp_called_instance_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[32]);
        if (tmp_called_instance_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 173;
        tmp_call_result_59 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_59,
            mod_consts[81],
            &PyTuple_GET_ITEM(mod_consts[83], 0)
        );

        Py_DECREF(tmp_called_instance_59);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_instance_60;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_60;
        CHECK_OBJECT(par_self);
        tmp_expression_value_113 = par_self;
        tmp_called_instance_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[32]);
        if (tmp_called_instance_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 174;
        tmp_call_result_60 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_60,
            mod_consts[81],
            &PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        Py_DECREF(tmp_called_instance_60);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_instance_61;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_call_result_61;
        CHECK_OBJECT(par_self);
        tmp_expression_value_114 = par_self;
        tmp_called_instance_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[77]);
        if (tmp_called_instance_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 175;
        tmp_call_result_61 = CALL_METHOD_NO_ARGS(tmp_called_instance_61, mod_consts[85]);
        Py_DECREF(tmp_called_instance_61);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_instance_62;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_call_result_62;
        CHECK_OBJECT(par_self);
        tmp_expression_value_115 = par_self;
        tmp_called_instance_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[36]);
        if (tmp_called_instance_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 176;
        tmp_call_result_62 = CALL_METHOD_NO_ARGS(tmp_called_instance_62, mod_consts[85]);
        Py_DECREF(tmp_called_instance_62);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_instance_63;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_call_result_63;
        CHECK_OBJECT(par_self);
        tmp_expression_value_116 = par_self;
        tmp_called_instance_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[52]);
        if (tmp_called_instance_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 177;
        tmp_call_result_63 = CALL_METHOD_NO_ARGS(tmp_called_instance_63, mod_consts[85]);
        Py_DECREF(tmp_called_instance_63);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_instance_64;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_call_result_64;
        CHECK_OBJECT(par_self);
        tmp_expression_value_117 = par_self;
        tmp_called_instance_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[59]);
        if (tmp_called_instance_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 178;
        tmp_call_result_64 = CALL_METHOD_NO_ARGS(tmp_called_instance_64, mod_consts[85]);
        Py_DECREF(tmp_called_instance_64);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_instance_65;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(par_self);
        tmp_expression_value_118 = par_self;
        tmp_called_instance_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[63]);
        if (tmp_called_instance_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 179;
        tmp_call_result_65 = CALL_METHOD_NO_ARGS(tmp_called_instance_65, mod_consts[85]);
        Py_DECREF(tmp_called_instance_65);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_instance_66;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_call_result_66;
        CHECK_OBJECT(par_self);
        tmp_expression_value_119 = par_self;
        tmp_called_instance_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[68]);
        if (tmp_called_instance_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 180;
        tmp_call_result_66 = CALL_METHOD_NO_ARGS(tmp_called_instance_66, mod_consts[85]);
        Py_DECREF(tmp_called_instance_66);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_instance_67;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_call_result_67;
        CHECK_OBJECT(par_self);
        tmp_expression_value_120 = par_self;
        tmp_called_instance_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[79]);
        if (tmp_called_instance_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 181;
        tmp_call_result_67 = CALL_METHOD_NO_ARGS(tmp_called_instance_67, mod_consts[85]);
        Py_DECREF(tmp_called_instance_67);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_expression_value_123;
        CHECK_OBJECT(par_self);
        tmp_expression_value_122 = par_self;
        tmp_expression_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[27]);
        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[48]);
        Py_DECREF(tmp_expression_value_121);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_123 = par_self;
        tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[30]);
        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 182;
        tmp_call_result_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_72);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_instance_68;
        PyObject *tmp_assattr_target_12;
        tmp_called_instance_68 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_68 == NULL)) {
            tmp_called_instance_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 183;
        tmp_assattr_value_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_68, mod_consts[29]);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[86], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_69;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_call_result_69;
        CHECK_OBJECT(par_self);
        tmp_expression_value_124 = par_self;
        tmp_called_instance_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[86]);
        if (tmp_called_instance_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 184;
        tmp_call_result_69 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_69,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        Py_DECREF(tmp_called_instance_69);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_assattr_target_13;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[19]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_126 = par_self;
        tmp_args_element_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[86]);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 185;
        tmp_assattr_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_73);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[88], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_70;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_call_result_70;
        CHECK_OBJECT(par_self);
        tmp_expression_value_127 = par_self;
        tmp_called_instance_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[88]);
        if (tmp_called_instance_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 186;
        tmp_call_result_70 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_70,
            mod_consts[21],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        Py_DECREF(tmp_called_instance_70);
        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_instance_71;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_call_result_71;
        CHECK_OBJECT(par_self);
        tmp_expression_value_128 = par_self;
        tmp_called_instance_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[88]);
        if (tmp_called_instance_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 187;
        tmp_call_result_71 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_71,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[89], 0)
        );

        Py_DECREF(tmp_called_instance_71);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_assattr_target_14;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[58]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_130 = par_self;
        tmp_args_element_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[86]);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 188;
        tmp_assattr_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_74);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[90], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_72;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_call_result_72;
        CHECK_OBJECT(par_self);
        tmp_expression_value_131 = par_self;
        tmp_called_instance_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[90]);
        if (tmp_called_instance_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 189;
        tmp_call_result_72 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_72,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        Py_DECREF(tmp_called_instance_72);
        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_expression_value_135;
        CHECK_OBJECT(par_self);
        tmp_expression_value_133 = par_self;
        tmp_expression_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[90]);
        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[70]);
        Py_DECREF(tmp_expression_value_132);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[71]);
        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[72]);
        Py_DECREF(tmp_expression_value_134);
        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 192;
        tmp_call_result_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_75);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_instance_73;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_call_result_74;
        CHECK_OBJECT(par_self);
        tmp_expression_value_136 = par_self;
        tmp_called_instance_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[90]);
        if (tmp_called_instance_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 193;
        tmp_call_result_74 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_73,
            mod_consts[73],
            PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        Py_DECREF(tmp_called_instance_73);
        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_expression_value_140;
        CHECK_OBJECT(par_self);
        tmp_expression_value_138 = par_self;
        tmp_expression_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[90]);
        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[91]);
        Py_DECREF(tmp_expression_value_137);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[71]);
        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[92]);
        Py_DECREF(tmp_expression_value_139);
        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 194;
        tmp_call_result_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_instance_74;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_call_result_76;
        CHECK_OBJECT(par_self);
        tmp_expression_value_141 = par_self;
        tmp_called_instance_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[90]);
        if (tmp_called_instance_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 195;
        tmp_call_result_76 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_74,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[93], 0)
        );

        Py_DECREF(tmp_called_instance_74);
        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_call_result_77;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        CHECK_OBJECT(par_self);
        tmp_expression_value_143 = par_self;
        tmp_expression_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[88]);
        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[48]);
        Py_DECREF(tmp_expression_value_142);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_144 = par_self;
        tmp_args_element_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[90]);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = mod_consts[49];
        tmp_args_element_value_79 = mod_consts[57];
        tmp_args_element_value_80 = mod_consts[51];
        tmp_args_element_value_81 = mod_consts[50];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_call_result_77 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_assattr_target_15;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[76]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_146 = par_self;
        tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[86]);
        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 197;
        tmp_assattr_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_assattr_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[94], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_call_result_78;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_instance_75;
        CHECK_OBJECT(par_self);
        tmp_expression_value_148 = par_self;
        tmp_expression_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[94]);
        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[4]);
        Py_DECREF(tmp_expression_value_147);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_75 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_75 == NULL)) {
            tmp_called_instance_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 198;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 198;
        tmp_args_element_value_83 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_75,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 198;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 198;
        tmp_call_result_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_83);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_instance_76;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_call_result_79;
        CHECK_OBJECT(par_self);
        tmp_expression_value_149 = par_self;
        tmp_called_instance_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[94]);
        if (tmp_called_instance_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 199;
        tmp_call_result_79 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_76,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        Py_DECREF(tmp_called_instance_76);
        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_instance_77;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_call_result_80;
        CHECK_OBJECT(par_self);
        tmp_expression_value_150 = par_self;
        tmp_called_instance_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[94]);
        if (tmp_called_instance_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 200;
        tmp_call_result_80 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_77,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        Py_DECREF(tmp_called_instance_77);
        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_call_result_81;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        CHECK_OBJECT(par_self);
        tmp_expression_value_152 = par_self;
        tmp_expression_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[88]);
        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[48]);
        Py_DECREF(tmp_expression_value_151);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_153 = par_self;
        tmp_args_element_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[94]);
        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = mod_consts[50];
        tmp_args_element_value_86 = mod_consts[57];
        tmp_args_element_value_87 = mod_consts[51];
        tmp_args_element_value_88 = mod_consts[50];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88};
            tmp_call_result_81 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_assattr_target_16;
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[58]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_155 = par_self;
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[86]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 202;
        tmp_assattr_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_89);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_assattr_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[96], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_call_result_82;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_called_instance_78;
        CHECK_OBJECT(par_self);
        tmp_expression_value_157 = par_self;
        tmp_expression_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[96]);
        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[4]);
        Py_DECREF(tmp_expression_value_156);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_78 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_78 == NULL)) {
            tmp_called_instance_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 203;
        tmp_args_element_value_90 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_78,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 203;
        tmp_call_result_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_90);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_instance_79;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_call_result_83;
        CHECK_OBJECT(par_self);
        tmp_expression_value_158 = par_self;
        tmp_called_instance_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[96]);
        if (tmp_called_instance_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 204;
        tmp_call_result_83 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_79,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        Py_DECREF(tmp_called_instance_79);
        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_instance_80;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_call_result_84;
        CHECK_OBJECT(par_self);
        tmp_expression_value_159 = par_self;
        tmp_called_instance_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[96]);
        if (tmp_called_instance_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 207;
        tmp_call_result_84 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_80,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[97], 0)
        );

        Py_DECREF(tmp_called_instance_80);
        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_call_result_85;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        CHECK_OBJECT(par_self);
        tmp_expression_value_161 = par_self;
        tmp_expression_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[88]);
        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[48]);
        Py_DECREF(tmp_expression_value_160);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_162 = par_self;
        tmp_args_element_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[96]);
        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 208;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = mod_consts[57];
        tmp_args_element_value_93 = mod_consts[57];
        tmp_args_element_value_94 = mod_consts[51];
        tmp_args_element_value_95 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95};
            tmp_call_result_85 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_42, call_args);
        }

        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_assattr_target_17;
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[35]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_164 = par_self;
        tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[86]);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 209;
        tmp_assattr_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_96);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_assattr_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[98], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_expression_value_169;
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[37]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[37]);
        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[38]);
        Py_DECREF(tmp_expression_value_166);
        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_97);

            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[37]);
        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_97);

            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[39]);
        Py_DECREF(tmp_expression_value_168);
        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_97);

            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_97);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizePolicy;
            assert(old != NULL);
            var_sizePolicy = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_81;
        PyObject *tmp_call_result_86;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_81 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 211;
        tmp_call_result_86 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_81,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_instance_82;
        PyObject *tmp_call_result_87;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_82 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 212;
        tmp_call_result_87 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_82,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_call_result_88;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_instance_83;
        PyObject *tmp_called_instance_84;
        PyObject *tmp_expression_value_171;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_170 = var_sizePolicy;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[42]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_171 = par_self;
        tmp_called_instance_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[98]);
        if (tmp_called_instance_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 213;
        tmp_called_instance_83 = CALL_METHOD_NO_ARGS(tmp_called_instance_84, mod_consts[43]);
        Py_DECREF(tmp_called_instance_84);
        if (tmp_called_instance_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 213;
        tmp_args_element_value_99 = CALL_METHOD_NO_ARGS(tmp_called_instance_83, mod_consts[44]);
        Py_DECREF(tmp_called_instance_83);
        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 213;
        tmp_call_result_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_99);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_instance_85;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_call_result_89;
        PyObject *tmp_args_element_value_100;
        CHECK_OBJECT(par_self);
        tmp_expression_value_172 = par_self;
        tmp_called_instance_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[98]);
        if (tmp_called_instance_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_100 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 214;
        tmp_call_result_89 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_85, mod_consts[45], tmp_args_element_value_100);
        Py_DECREF(tmp_called_instance_85);
        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_instance_86;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_call_result_90;
        CHECK_OBJECT(par_self);
        tmp_expression_value_173 = par_self;
        tmp_called_instance_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[98]);
        if (tmp_called_instance_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 215;
        tmp_call_result_90 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_86,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        Py_DECREF(tmp_called_instance_86);
        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_instance_87;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_call_result_91;
        CHECK_OBJECT(par_self);
        tmp_expression_value_174 = par_self;
        tmp_called_instance_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[98]);
        if (tmp_called_instance_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 216;
        tmp_call_result_91 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_87,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[99], 0)
        );

        Py_DECREF(tmp_called_instance_87);
        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_call_result_92;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        CHECK_OBJECT(par_self);
        tmp_expression_value_176 = par_self;
        tmp_expression_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[88]);
        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[48]);
        Py_DECREF(tmp_expression_value_175);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_177 = par_self;
        tmp_args_element_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[98]);
        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = mod_consts[51];
        tmp_args_element_value_103 = mod_consts[50];
        tmp_args_element_value_104 = mod_consts[50];
        tmp_args_element_value_105 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_call_result_92 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_46, call_args);
        }

        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_assattr_target_18;
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[35]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_179 = par_self;
        tmp_args_element_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[86]);
        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 218;
        tmp_assattr_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_106);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_assattr_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[100], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_expression_value_184;
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[37]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[37]);
        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[38]);
        Py_DECREF(tmp_expression_value_181);
        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_107);

            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[37]);
        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_107);

            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[39]);
        Py_DECREF(tmp_expression_value_183);
        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_107);

            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_48, call_args);
        }

        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_107);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizePolicy;
            assert(old != NULL);
            var_sizePolicy = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_88;
        PyObject *tmp_call_result_93;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_88 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 220;
        tmp_call_result_93 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_88,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_instance_89;
        PyObject *tmp_call_result_94;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_89 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 221;
        tmp_call_result_94 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_89,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_call_result_95;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_called_instance_90;
        PyObject *tmp_called_instance_91;
        PyObject *tmp_expression_value_186;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_185 = var_sizePolicy;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[42]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_186 = par_self;
        tmp_called_instance_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[100]);
        if (tmp_called_instance_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 222;
        tmp_called_instance_90 = CALL_METHOD_NO_ARGS(tmp_called_instance_91, mod_consts[43]);
        Py_DECREF(tmp_called_instance_91);
        if (tmp_called_instance_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 222;
        tmp_args_element_value_109 = CALL_METHOD_NO_ARGS(tmp_called_instance_90, mod_consts[44]);
        Py_DECREF(tmp_called_instance_90);
        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 222;
        tmp_call_result_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_109);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_instance_92;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_call_result_96;
        PyObject *tmp_args_element_value_110;
        CHECK_OBJECT(par_self);
        tmp_expression_value_187 = par_self;
        tmp_called_instance_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[100]);
        if (tmp_called_instance_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_110 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 223;
        tmp_call_result_96 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_92, mod_consts[45], tmp_args_element_value_110);
        Py_DECREF(tmp_called_instance_92);
        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_instance_93;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_call_result_97;
        CHECK_OBJECT(par_self);
        tmp_expression_value_188 = par_self;
        tmp_called_instance_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[100]);
        if (tmp_called_instance_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 224;
        tmp_call_result_97 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_93,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        Py_DECREF(tmp_called_instance_93);
        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_instance_94;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_call_result_98;
        CHECK_OBJECT(par_self);
        tmp_expression_value_189 = par_self;
        tmp_called_instance_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[100]);
        if (tmp_called_instance_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 225;
        tmp_call_result_98 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_94,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[101], 0)
        );

        Py_DECREF(tmp_called_instance_94);
        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_call_result_99;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_args_element_value_115;
        CHECK_OBJECT(par_self);
        tmp_expression_value_191 = par_self;
        tmp_expression_value_190 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[88]);
        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[48]);
        Py_DECREF(tmp_expression_value_190);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_192 = par_self;
        tmp_args_element_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[100]);
        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = mod_consts[49];
        tmp_args_element_value_113 = mod_consts[50];
        tmp_args_element_value_114 = mod_consts[51];
        tmp_args_element_value_115 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_value_111, tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114, tmp_args_element_value_115};
            tmp_call_result_99 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_50, call_args);
        }

        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_assattr_target_19;
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[62]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_194 = par_self;
        tmp_args_element_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[86]);
        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 227;
        tmp_assattr_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_116);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_assattr_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[102], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_expression_value_199;
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[37]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_196 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[37]);
        if (tmp_expression_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[39]);
        Py_DECREF(tmp_expression_value_196);
        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[37]);
        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[39]);
        Py_DECREF(tmp_expression_value_198);
        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_52, call_args);
        }

        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_117);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizePolicy;
            assert(old != NULL);
            var_sizePolicy = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_95;
        PyObject *tmp_call_result_100;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_95 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 229;
        tmp_call_result_100 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_95,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_instance_96;
        PyObject *tmp_call_result_101;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_96 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 230;
        tmp_call_result_101 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_96,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_call_result_102;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_called_instance_97;
        PyObject *tmp_called_instance_98;
        PyObject *tmp_expression_value_201;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_200 = var_sizePolicy;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[42]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_201 = par_self;
        tmp_called_instance_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[102]);
        if (tmp_called_instance_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 231;
        tmp_called_instance_97 = CALL_METHOD_NO_ARGS(tmp_called_instance_98, mod_consts[43]);
        Py_DECREF(tmp_called_instance_98);
        if (tmp_called_instance_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 231;
        tmp_args_element_value_119 = CALL_METHOD_NO_ARGS(tmp_called_instance_97, mod_consts[44]);
        Py_DECREF(tmp_called_instance_97);
        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 231;
        tmp_call_result_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_119);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_119);
        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_instance_99;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_call_result_103;
        PyObject *tmp_args_element_value_120;
        CHECK_OBJECT(par_self);
        tmp_expression_value_202 = par_self;
        tmp_called_instance_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[102]);
        if (tmp_called_instance_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_120 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 232;
        tmp_call_result_103 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_99, mod_consts[45], tmp_args_element_value_120);
        Py_DECREF(tmp_called_instance_99);
        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_call_result_104;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_called_instance_100;
        CHECK_OBJECT(par_self);
        tmp_expression_value_204 = par_self;
        tmp_expression_value_203 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[102]);
        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[4]);
        Py_DECREF(tmp_expression_value_203);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_100 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_100 == NULL)) {
            tmp_called_instance_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 233;
        tmp_args_element_value_121 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_100,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 233;
        tmp_call_result_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_121);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_121);
        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_instance_101;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_call_result_105;
        CHECK_OBJECT(par_self);
        tmp_expression_value_205 = par_self;
        tmp_called_instance_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[102]);
        if (tmp_called_instance_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 234;
        tmp_call_result_105 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_101,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[64], 0)
        );

        Py_DECREF(tmp_called_instance_101);
        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_instance_102;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_call_result_106;
        CHECK_OBJECT(par_self);
        tmp_expression_value_206 = par_self;
        tmp_called_instance_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[102]);
        if (tmp_called_instance_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 237;
        tmp_call_result_106 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_102,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[103], 0)
        );

        Py_DECREF(tmp_called_instance_102);
        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_instance_103;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_call_result_107;
        CHECK_OBJECT(par_self);
        tmp_expression_value_207 = par_self;
        tmp_called_instance_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[102]);
        if (tmp_called_instance_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 238;
        tmp_call_result_107 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_103,
            mod_consts[66],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        Py_DECREF(tmp_called_instance_103);
        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_call_result_108;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        CHECK_OBJECT(par_self);
        tmp_expression_value_209 = par_self;
        tmp_expression_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[88]);
        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[48]);
        Py_DECREF(tmp_expression_value_208);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_210 = par_self;
        tmp_args_element_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[102]);
        if (tmp_args_element_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_123 = mod_consts[57];
        tmp_args_element_value_124 = mod_consts[51];
        tmp_args_element_value_125 = mod_consts[51];
        tmp_args_element_value_126 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_122, tmp_args_element_value_123, tmp_args_element_value_124, tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_call_result_108 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_55, call_args);
        }

        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_assattr_target_20;
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[62]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_212 = par_self;
        tmp_args_element_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[86]);
        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 240;
        tmp_assattr_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_127);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_127);
        if (tmp_assattr_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[104], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_expression_value_217;
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[37]);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[37]);
        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[39]);
        Py_DECREF(tmp_expression_value_214);
        if (tmp_args_element_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_216 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[37]);
        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[39]);
        Py_DECREF(tmp_expression_value_216);
        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_128, tmp_args_element_value_129};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_57, call_args);
        }

        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_128);
        Py_DECREF(tmp_args_element_value_129);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizePolicy;
            assert(old != NULL);
            var_sizePolicy = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_104;
        PyObject *tmp_call_result_109;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_104 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 242;
        tmp_call_result_109 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_104,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_instance_105;
        PyObject *tmp_call_result_110;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_105 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 243;
        tmp_call_result_110 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_105,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_call_result_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_call_result_111;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_called_instance_106;
        PyObject *tmp_called_instance_107;
        PyObject *tmp_expression_value_219;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_218 = var_sizePolicy;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[42]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_219 = par_self;
        tmp_called_instance_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[104]);
        if (tmp_called_instance_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 244;
        tmp_called_instance_106 = CALL_METHOD_NO_ARGS(tmp_called_instance_107, mod_consts[43]);
        Py_DECREF(tmp_called_instance_107);
        if (tmp_called_instance_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 244;
        tmp_args_element_value_130 = CALL_METHOD_NO_ARGS(tmp_called_instance_106, mod_consts[44]);
        Py_DECREF(tmp_called_instance_106);
        if (tmp_args_element_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 244;
        tmp_call_result_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_130);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_130);
        if (tmp_call_result_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_instance_108;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_call_result_112;
        PyObject *tmp_args_element_value_131;
        CHECK_OBJECT(par_self);
        tmp_expression_value_220 = par_self;
        tmp_called_instance_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[104]);
        if (tmp_called_instance_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_131 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 245;
        tmp_call_result_112 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_108, mod_consts[45], tmp_args_element_value_131);
        Py_DECREF(tmp_called_instance_108);
        if (tmp_call_result_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_call_result_113;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_called_instance_109;
        CHECK_OBJECT(par_self);
        tmp_expression_value_222 = par_self;
        tmp_expression_value_221 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[104]);
        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[4]);
        Py_DECREF(tmp_expression_value_221);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_109 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_109 == NULL)) {
            tmp_called_instance_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 246;
        tmp_args_element_value_132 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_109,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 246;
        tmp_call_result_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_132);
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_132);
        if (tmp_call_result_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_instance_110;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_call_result_114;
        CHECK_OBJECT(par_self);
        tmp_expression_value_223 = par_self;
        tmp_called_instance_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[104]);
        if (tmp_called_instance_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 247;
        tmp_call_result_114 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_110,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[64], 0)
        );

        Py_DECREF(tmp_called_instance_110);
        if (tmp_call_result_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_instance_111;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_call_result_115;
        CHECK_OBJECT(par_self);
        tmp_expression_value_224 = par_self;
        tmp_called_instance_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[104]);
        if (tmp_called_instance_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 250;
        tmp_call_result_115 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_111,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[105], 0)
        );

        Py_DECREF(tmp_called_instance_111);
        if (tmp_call_result_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_instance_112;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_call_result_116;
        CHECK_OBJECT(par_self);
        tmp_expression_value_225 = par_self;
        tmp_called_instance_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[104]);
        if (tmp_called_instance_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 251;
        tmp_call_result_116 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_112,
            mod_consts[66],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        Py_DECREF(tmp_called_instance_112);
        if (tmp_call_result_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_call_result_117;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        CHECK_OBJECT(par_self);
        tmp_expression_value_227 = par_self;
        tmp_expression_value_226 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[88]);
        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[48]);
        Py_DECREF(tmp_expression_value_226);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_228 = par_self;
        tmp_args_element_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[104]);
        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_134 = mod_consts[51];
        tmp_args_element_value_135 = mod_consts[51];
        tmp_args_element_value_136 = mod_consts[51];
        tmp_args_element_value_137 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135, tmp_args_element_value_136, tmp_args_element_value_137};
            tmp_call_result_117 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_60, call_args);
        }

        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_133);
        if (tmp_call_result_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_assattr_target_21;
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[35]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_230 = par_self;
        tmp_args_element_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[86]);
        if (tmp_args_element_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 253;
        tmp_assattr_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_138);
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_138);
        if (tmp_assattr_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[106], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_expression_value_235;
        tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_231 == NULL)) {
            tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[37]);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_233 == NULL)) {
            tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_232 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[37]);
        if (tmp_expression_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[39]);
        Py_DECREF(tmp_expression_value_232);
        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_235 == NULL)) {
            tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_234 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[37]);
        if (tmp_expression_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[39]);
        Py_DECREF(tmp_expression_value_234);
        if (tmp_args_element_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_139, tmp_args_element_value_140};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_62, call_args);
        }

        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_139);
        Py_DECREF(tmp_args_element_value_140);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizePolicy;
            assert(old != NULL);
            var_sizePolicy = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_113;
        PyObject *tmp_call_result_118;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_113 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 255;
        tmp_call_result_118 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_113,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_instance_114;
        PyObject *tmp_call_result_119;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_114 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 256;
        tmp_call_result_119 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_114,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_call_result_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_call_result_120;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_called_instance_115;
        PyObject *tmp_called_instance_116;
        PyObject *tmp_expression_value_237;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_236 = var_sizePolicy;
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[42]);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_237 = par_self;
        tmp_called_instance_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[106]);
        if (tmp_called_instance_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 257;
        tmp_called_instance_115 = CALL_METHOD_NO_ARGS(tmp_called_instance_116, mod_consts[43]);
        Py_DECREF(tmp_called_instance_116);
        if (tmp_called_instance_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 257;
        tmp_args_element_value_141 = CALL_METHOD_NO_ARGS(tmp_called_instance_115, mod_consts[44]);
        Py_DECREF(tmp_called_instance_115);
        if (tmp_args_element_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 257;
        tmp_call_result_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_141);
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_args_element_value_141);
        if (tmp_call_result_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_instance_117;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_call_result_121;
        PyObject *tmp_args_element_value_142;
        CHECK_OBJECT(par_self);
        tmp_expression_value_238 = par_self;
        tmp_called_instance_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[106]);
        if (tmp_called_instance_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_142 = var_sizePolicy;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 258;
        tmp_call_result_121 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_117, mod_consts[45], tmp_args_element_value_142);
        Py_DECREF(tmp_called_instance_117);
        if (tmp_call_result_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_call_result_122;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_called_instance_118;
        CHECK_OBJECT(par_self);
        tmp_expression_value_240 = par_self;
        tmp_expression_value_239 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[106]);
        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[4]);
        Py_DECREF(tmp_expression_value_239);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_118 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_118 == NULL)) {
            tmp_called_instance_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 259;
        tmp_args_element_value_143 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_118,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 259;
        tmp_call_result_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_143);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_143);
        if (tmp_call_result_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_instance_119;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_call_result_123;
        CHECK_OBJECT(par_self);
        tmp_expression_value_241 = par_self;
        tmp_called_instance_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[106]);
        if (tmp_called_instance_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 260;
        tmp_call_result_123 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_119,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        Py_DECREF(tmp_called_instance_119);
        if (tmp_call_result_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_instance_120;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_call_result_124;
        CHECK_OBJECT(par_self);
        tmp_expression_value_242 = par_self;
        tmp_called_instance_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[106]);
        if (tmp_called_instance_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 261;
        tmp_call_result_124 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_120,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        Py_DECREF(tmp_called_instance_120);
        if (tmp_call_result_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_call_result_125;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_args_element_value_148;
        CHECK_OBJECT(par_self);
        tmp_expression_value_244 = par_self;
        tmp_expression_value_243 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[88]);
        if (tmp_expression_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[48]);
        Py_DECREF(tmp_expression_value_243);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_245 = par_self;
        tmp_args_element_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[106]);
        if (tmp_args_element_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = mod_consts[57];
        tmp_args_element_value_146 = mod_consts[50];
        tmp_args_element_value_147 = mod_consts[51];
        tmp_args_element_value_148 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = {tmp_args_element_value_144, tmp_args_element_value_145, tmp_args_element_value_146, tmp_args_element_value_147, tmp_args_element_value_148};
            tmp_call_result_125 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_65, call_args);
        }

        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_args_element_value_144);
        if (tmp_call_result_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_assattr_target_22;
        tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_246 == NULL)) {
            tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[58]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_247 = par_self;
        tmp_args_element_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[86]);
        if (tmp_args_element_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 263;
        tmp_assattr_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_149);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_149);
        if (tmp_assattr_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[108], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_call_result_126;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_called_instance_121;
        CHECK_OBJECT(par_self);
        tmp_expression_value_249 = par_self;
        tmp_expression_value_248 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[108]);
        if (tmp_expression_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[4]);
        Py_DECREF(tmp_expression_value_248);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_121 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_121 == NULL)) {
            tmp_called_instance_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 264;
        tmp_args_element_value_150 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_121,
            mod_consts[6],
            &PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 264;
        tmp_call_result_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_150);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_150);
        if (tmp_call_result_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_instance_122;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_call_result_127;
        CHECK_OBJECT(par_self);
        tmp_expression_value_250 = par_self;
        tmp_called_instance_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[108]);
        if (tmp_called_instance_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 265;
        tmp_call_result_127 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_122,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        Py_DECREF(tmp_called_instance_122);
        if (tmp_call_result_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_instance_123;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_call_result_128;
        CHECK_OBJECT(par_self);
        tmp_expression_value_251 = par_self;
        tmp_called_instance_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[108]);
        if (tmp_called_instance_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 268;
        tmp_call_result_128 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_123,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        Py_DECREF(tmp_called_instance_123);
        if (tmp_call_result_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_call_result_129;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_args_element_value_155;
        CHECK_OBJECT(par_self);
        tmp_expression_value_253 = par_self;
        tmp_expression_value_252 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[88]);
        if (tmp_expression_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[48]);
        Py_DECREF(tmp_expression_value_252);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_254 = par_self;
        tmp_args_element_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[108]);
        if (tmp_args_element_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 269;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_152 = mod_consts[51];
        tmp_args_element_value_153 = mod_consts[57];
        tmp_args_element_value_154 = mod_consts[51];
        tmp_args_element_value_155 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_151, tmp_args_element_value_152, tmp_args_element_value_153, tmp_args_element_value_154, tmp_args_element_value_155};
            tmp_call_result_129 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_68, call_args);
        }

        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_151);
        if (tmp_call_result_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_instance_124;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_call_result_130;
        CHECK_OBJECT(par_self);
        tmp_expression_value_255 = par_self;
        tmp_called_instance_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[88]);
        if (tmp_called_instance_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 270;
        tmp_call_result_130 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_124,
            mod_consts[81],
            &PyTuple_GET_ITEM(mod_consts[82], 0)
        );

        Py_DECREF(tmp_called_instance_124);
        if (tmp_call_result_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_instance_125;
        PyObject *tmp_expression_value_256;
        PyObject *tmp_call_result_131;
        CHECK_OBJECT(par_self);
        tmp_expression_value_256 = par_self;
        tmp_called_instance_125 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[88]);
        if (tmp_called_instance_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 271;
        tmp_call_result_131 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_125,
            mod_consts[81],
            &PyTuple_GET_ITEM(mod_consts[83], 0)
        );

        Py_DECREF(tmp_called_instance_125);
        if (tmp_call_result_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_instance_126;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_call_result_132;
        CHECK_OBJECT(par_self);
        tmp_expression_value_257 = par_self;
        tmp_called_instance_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[88]);
        if (tmp_called_instance_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 272;
        tmp_call_result_132 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_126,
            mod_consts[81],
            &PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        Py_DECREF(tmp_called_instance_126);
        if (tmp_call_result_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_instance_127;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_call_result_133;
        CHECK_OBJECT(par_self);
        tmp_expression_value_258 = par_self;
        tmp_called_instance_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[88]);
        if (tmp_called_instance_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 273;
        tmp_call_result_133 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_127,
            mod_consts[110],
            &PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        Py_DECREF(tmp_called_instance_127);
        if (tmp_call_result_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_instance_128;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_call_result_134;
        CHECK_OBJECT(par_self);
        tmp_expression_value_259 = par_self;
        tmp_called_instance_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[88]);
        if (tmp_called_instance_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 274;
        tmp_call_result_134 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_128,
            mod_consts[110],
            &PyTuple_GET_ITEM(mod_consts[112], 0)
        );

        Py_DECREF(tmp_called_instance_128);
        if (tmp_call_result_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_instance_129;
        PyObject *tmp_expression_value_260;
        PyObject *tmp_call_result_135;
        CHECK_OBJECT(par_self);
        tmp_expression_value_260 = par_self;
        tmp_called_instance_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[88]);
        if (tmp_called_instance_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 275;
        tmp_call_result_135 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_129,
            mod_consts[110],
            &PyTuple_GET_ITEM(mod_consts[113], 0)
        );

        Py_DECREF(tmp_called_instance_129);
        if (tmp_call_result_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_instance_130;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_call_result_136;
        CHECK_OBJECT(par_self);
        tmp_expression_value_261 = par_self;
        tmp_called_instance_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[88]);
        if (tmp_called_instance_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 276;
        tmp_call_result_136 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_130,
            mod_consts[110],
            &PyTuple_GET_ITEM(mod_consts[114], 0)
        );

        Py_DECREF(tmp_called_instance_130);
        if (tmp_call_result_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_call_result_137;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_expression_value_264;
        CHECK_OBJECT(par_self);
        tmp_expression_value_263 = par_self;
        tmp_expression_value_262 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[27]);
        if (tmp_expression_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[48]);
        Py_DECREF(tmp_expression_value_262);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_264 = par_self;
        tmp_args_element_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[86]);
        if (tmp_args_element_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 277;
        tmp_call_result_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_156);
        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_args_element_value_156);
        if (tmp_call_result_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_call_result_138;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_args_element_value_161;
        CHECK_OBJECT(par_self);
        tmp_expression_value_266 = par_self;
        tmp_expression_value_265 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[20]);
        if (tmp_expression_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[48]);
        Py_DECREF(tmp_expression_value_265);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_267 = par_self;
        tmp_args_element_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[27]);
        if (tmp_args_element_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_158 = mod_consts[57];
        tmp_args_element_value_159 = mod_consts[57];
        tmp_args_element_value_160 = mod_consts[51];
        tmp_args_element_value_161 = mod_consts[51];
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_157, tmp_args_element_value_158, tmp_args_element_value_159, tmp_args_element_value_160, tmp_args_element_value_161};
            tmp_call_result_138 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_70, call_args);
        }

        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_157);
        if (tmp_call_result_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_268;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_call_result_139;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_expression_value_270;
        CHECK_OBJECT(par_self);
        tmp_expression_value_269 = par_self;
        tmp_expression_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[59]);
        if (tmp_expression_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_268, mod_consts[115]);
        Py_DECREF(tmp_expression_value_268);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_270 = par_self;
        tmp_args_element_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[63]);
        if (tmp_args_element_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 279;
        tmp_call_result_139 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_162);
        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_element_value_162);
        if (tmp_call_result_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_call_result_140;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_expression_value_273;
        CHECK_OBJECT(par_self);
        tmp_expression_value_272 = par_self;
        tmp_expression_value_271 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[68]);
        if (tmp_expression_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[115]);
        Py_DECREF(tmp_expression_value_271);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_273 = par_self;
        tmp_args_element_value_163 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[36]);
        if (tmp_args_element_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 280;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 280;
        tmp_call_result_140 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_163);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_163);
        if (tmp_call_result_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_call_result_141;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_expression_value_276;
        CHECK_OBJECT(par_self);
        tmp_expression_value_275 = par_self;
        tmp_expression_value_274 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[90]);
        if (tmp_expression_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[115]);
        Py_DECREF(tmp_expression_value_274);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_276 = par_self;
        tmp_args_element_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[100]);
        if (tmp_args_element_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 281;
        tmp_call_result_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_73, tmp_args_element_value_164);
        Py_DECREF(tmp_called_value_73);
        Py_DECREF(tmp_args_element_value_164);
        if (tmp_call_result_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_call_result_142;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_expression_value_279;
        CHECK_OBJECT(par_self);
        tmp_expression_value_278 = par_self;
        tmp_expression_value_277 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[96]);
        if (tmp_expression_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[115]);
        Py_DECREF(tmp_expression_value_277);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_279 = par_self;
        tmp_args_element_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[102]);
        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 282;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 282;
        tmp_call_result_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_165);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_165);
        if (tmp_call_result_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_280;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_call_result_143;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_expression_value_282;
        CHECK_OBJECT(par_self);
        tmp_expression_value_281 = par_self;
        tmp_expression_value_280 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[108]);
        if (tmp_expression_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_280, mod_consts[115]);
        Py_DECREF(tmp_expression_value_280);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_282 = par_self;
        tmp_args_element_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[104]);
        if (tmp_args_element_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);

            exception_lineno = 283;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 283;
        tmp_call_result_143 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_75, tmp_args_element_value_166);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_element_value_166);
        if (tmp_call_result_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_instance_131;
        PyObject *tmp_call_result_144;
        PyObject *tmp_args_element_value_167;
        CHECK_OBJECT(par_self);
        tmp_called_instance_131 = par_self;
        CHECK_OBJECT(par_widget);
        tmp_args_element_value_167 = par_widget;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 285;
        tmp_call_result_144 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_131, mod_consts[116], tmp_args_element_value_167);
        if (tmp_call_result_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_instance_132;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_call_result_145;
        CHECK_OBJECT(par_self);
        tmp_expression_value_283 = par_self;
        tmp_called_instance_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[27]);
        if (tmp_called_instance_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 286;
        tmp_call_result_145 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_132,
            mod_consts[117],
            PyTuple_GET_ITEM(mod_consts[118], 0)
        );

        Py_DECREF(tmp_called_instance_132);
        if (tmp_call_result_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_call_result_146;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_expression_value_287;
        CHECK_OBJECT(par_self);
        tmp_expression_value_286 = par_self;
        tmp_expression_value_285 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[106]);
        if (tmp_expression_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_284 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[119]);
        Py_DECREF(tmp_expression_value_285);
        if (tmp_expression_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[120]);
        Py_DECREF(tmp_expression_value_284);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_expression_value_287 = par_widget;
        tmp_args_element_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[121]);
        if (tmp_args_element_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 287;
        tmp_call_result_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_168);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_168);
        if (tmp_call_result_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_288;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_expression_value_291;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_147;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_expression_value_292;
        CHECK_OBJECT(par_self);
        tmp_expression_value_291 = par_self;
        tmp_expression_value_290 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[102]);
        if (tmp_expression_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_289 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[122]);
        Py_DECREF(tmp_expression_value_290);
        if (tmp_expression_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[123];
        tmp_expression_value_288 = LOOKUP_SUBSCRIPT(tmp_expression_value_289, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_289);
        if (tmp_expression_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_288, mod_consts[120]);
        Py_DECREF(tmp_expression_value_288);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_expression_value_292 = par_widget;
        tmp_args_element_value_169 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[124]);
        if (tmp_args_element_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 288;
        tmp_call_result_147 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_77, tmp_args_element_value_169);
        Py_DECREF(tmp_called_value_77);
        Py_DECREF(tmp_args_element_value_169);
        if (tmp_call_result_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_expression_value_296;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_148;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_expression_value_297;
        CHECK_OBJECT(par_self);
        tmp_expression_value_296 = par_self;
        tmp_expression_value_295 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[104]);
        if (tmp_expression_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_294 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[122]);
        Py_DECREF(tmp_expression_value_295);
        if (tmp_expression_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[123];
        tmp_expression_value_293 = LOOKUP_SUBSCRIPT(tmp_expression_value_294, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_294);
        if (tmp_expression_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[120]);
        Py_DECREF(tmp_expression_value_293);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_expression_value_297 = par_widget;
        tmp_args_element_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[125]);
        if (tmp_args_element_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 289;
        tmp_call_result_148 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_170);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_170);
        if (tmp_call_result_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_call_result_149;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_expression_value_301;
        CHECK_OBJECT(par_self);
        tmp_expression_value_300 = par_self;
        tmp_expression_value_299 = LOOKUP_ATTRIBUTE(tmp_expression_value_300, mod_consts[52]);
        if (tmp_expression_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_298 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[119]);
        Py_DECREF(tmp_expression_value_299);
        if (tmp_expression_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[120]);
        Py_DECREF(tmp_expression_value_298);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_expression_value_301 = par_widget;
        tmp_args_element_value_171 = LOOKUP_ATTRIBUTE(tmp_expression_value_301, mod_consts[126]);
        if (tmp_args_element_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 290;
        tmp_call_result_149 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_79, tmp_args_element_value_171);
        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_element_value_171);
        if (tmp_call_result_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_call_result_150;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_expression_value_305;
        CHECK_OBJECT(par_self);
        tmp_expression_value_304 = par_self;
        tmp_expression_value_303 = LOOKUP_ATTRIBUTE(tmp_expression_value_304, mod_consts[98]);
        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_302 = LOOKUP_ATTRIBUTE(tmp_expression_value_303, mod_consts[119]);
        Py_DECREF(tmp_expression_value_303);
        if (tmp_expression_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[120]);
        Py_DECREF(tmp_expression_value_302);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_expression_value_305 = par_widget;
        tmp_args_element_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[127]);
        if (tmp_args_element_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 291;
        tmp_call_result_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_172);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_172);
        if (tmp_call_result_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_expression_value_308;
        PyObject *tmp_call_result_151;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_expression_value_309;
        CHECK_OBJECT(par_self);
        tmp_expression_value_308 = par_self;
        tmp_expression_value_307 = LOOKUP_ATTRIBUTE(tmp_expression_value_308, mod_consts[100]);
        if (tmp_expression_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_306 = LOOKUP_ATTRIBUTE(tmp_expression_value_307, mod_consts[119]);
        Py_DECREF(tmp_expression_value_307);
        if (tmp_expression_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_306, mod_consts[120]);
        Py_DECREF(tmp_expression_value_306);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_expression_value_309 = par_widget;
        tmp_args_element_value_173 = LOOKUP_ATTRIBUTE(tmp_expression_value_309, mod_consts[128]);
        if (tmp_args_element_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 292;
        tmp_call_result_151 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_81, tmp_args_element_value_173);
        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_args_element_value_173);
        if (tmp_call_result_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_310;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_expression_value_312;
        PyObject *tmp_call_result_152;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_expression_value_313;
        CHECK_OBJECT(par_self);
        tmp_expression_value_312 = par_self;
        tmp_expression_value_311 = LOOKUP_ATTRIBUTE(tmp_expression_value_312, mod_consts[79]);
        if (tmp_expression_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_310 = LOOKUP_ATTRIBUTE(tmp_expression_value_311, mod_consts[119]);
        Py_DECREF(tmp_expression_value_311);
        if (tmp_expression_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_310, mod_consts[120]);
        Py_DECREF(tmp_expression_value_310);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_expression_value_313 = par_widget;
        tmp_args_element_value_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_313, mod_consts[127]);
        if (tmp_args_element_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 293;
        tmp_call_result_152 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_174);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_174);
        if (tmp_call_result_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_314;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_expression_value_316;
        PyObject *tmp_call_result_153;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_expression_value_317;
        CHECK_OBJECT(par_self);
        tmp_expression_value_316 = par_self;
        tmp_expression_value_315 = LOOKUP_ATTRIBUTE(tmp_expression_value_316, mod_consts[36]);
        if (tmp_expression_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_314 = LOOKUP_ATTRIBUTE(tmp_expression_value_315, mod_consts[119]);
        Py_DECREF(tmp_expression_value_315);
        if (tmp_expression_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_314, mod_consts[120]);
        Py_DECREF(tmp_expression_value_314);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_expression_value_317 = par_widget;
        tmp_args_element_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_317, mod_consts[128]);
        if (tmp_args_element_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 294;
        tmp_call_result_153 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_83, tmp_args_element_value_175);
        Py_DECREF(tmp_called_value_83);
        Py_DECREF(tmp_args_element_value_175);
        if (tmp_call_result_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_instance_133;
        PyObject *tmp_expression_value_318;
        PyObject *tmp_call_result_154;
        PyObject *tmp_args_element_value_176;
        tmp_expression_value_318 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_318 == NULL)) {
            tmp_expression_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_318, mod_consts[129]);
        if (tmp_called_instance_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_args_element_value_176 = par_widget;
        frame_842a65b899bf895a618c74c50604361e->m_frame.f_lineno = 295;
        tmp_call_result_154 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_133, mod_consts[130], tmp_args_element_value_176);
        Py_DECREF(tmp_called_instance_133);
        if (tmp_call_result_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_842a65b899bf895a618c74c50604361e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_842a65b899bf895a618c74c50604361e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_842a65b899bf895a618c74c50604361e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_842a65b899bf895a618c74c50604361e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_842a65b899bf895a618c74c50604361e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_842a65b899bf895a618c74c50604361e,
        type_description_1,
        par_self,
        par_widget,
        var_icon,
        var_sizePolicy
    );


    // Release cached frame if used for exception.
    if (frame_842a65b899bf895a618c74c50604361e == cache_frame_842a65b899bf895a618c74c50604361e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_842a65b899bf895a618c74c50604361e);
        cache_frame_842a65b899bf895a618c74c50604361e = NULL;
    }

    assertFrameObject(frame_842a65b899bf895a618c74c50604361e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_icon);
    Py_DECREF(var_icon);
    var_icon = NULL;
    CHECK_OBJECT(var_sizePolicy);
    Py_DECREF(var_sizePolicy);
    var_sizePolicy = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_icon);
    var_icon = NULL;
    Py_XDECREF(var_sizePolicy);
    var_sizePolicy = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gui$$$function__2_retranslateUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *var__translate = NULL;
    struct Nuitka_FrameObject *frame_7740010d450e2e04d5c1b18f1d183d2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7740010d450e2e04d5c1b18f1d183d2e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7740010d450e2e04d5c1b18f1d183d2e)) {
        Py_XDECREF(cache_frame_7740010d450e2e04d5c1b18f1d183d2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7740010d450e2e04d5c1b18f1d183d2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7740010d450e2e04d5c1b18f1d183d2e = MAKE_FUNCTION_FRAME(codeobj_7740010d450e2e04d5c1b18f1d183d2e, module_gui, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7740010d450e2e04d5c1b18f1d183d2e->m_type_description == NULL);
    frame_7740010d450e2e04d5c1b18f1d183d2e = cache_frame_7740010d450e2e04d5c1b18f1d183d2e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7740010d450e2e04d5c1b18f1d183d2e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7740010d450e2e04d5c1b18f1d183d2e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[131]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[132]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var__translate == NULL);
        var__translate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_3 = par_widget;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[133]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_2 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 299;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[134]);

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 299;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 299;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[36]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[135]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_4 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 300;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[136]);

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 300;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[52]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[135]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_6 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 310;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[137]);

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 310;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[59]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[135]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_8 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 311;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[138]);

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 311;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[63]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[139]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[57];
        CHECK_OBJECT(var__translate);
        tmp_called_value_10 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 312;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[140]);

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[68]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[135]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_12 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 313;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[141]);

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 313;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[79]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[135]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_14 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 321;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[142]);

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 321;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[90]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[135]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_16 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 322;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[143]);

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 322;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[96]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[135]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_18 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 323;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[144]);

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 323;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[98]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[135]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_20 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 324;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[142]);

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 324;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[100]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[135]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_22 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 325;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[145]);

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 325;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_24;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[102]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[139]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[57];
        CHECK_OBJECT(var__translate);
        tmp_called_value_24 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 333;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[140]);

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 333;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_26;
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[104]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[139]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[57];
        CHECK_OBJECT(var__translate);
        tmp_called_value_26 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 334;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_26, mod_consts[140]);

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 334;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_28;
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[106]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[135]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_28 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 335;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[146]);

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 335;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_30;
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[108]);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[135]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_30 = var__translate;
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 336;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[147]);

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 336;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame.f_lineno = 336;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7740010d450e2e04d5c1b18f1d183d2e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7740010d450e2e04d5c1b18f1d183d2e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7740010d450e2e04d5c1b18f1d183d2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7740010d450e2e04d5c1b18f1d183d2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7740010d450e2e04d5c1b18f1d183d2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7740010d450e2e04d5c1b18f1d183d2e,
        type_description_1,
        par_self,
        par_widget,
        var__translate
    );


    // Release cached frame if used for exception.
    if (frame_7740010d450e2e04d5c1b18f1d183d2e == cache_frame_7740010d450e2e04d5c1b18f1d183d2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7740010d450e2e04d5c1b18f1d183d2e);
        cache_frame_7740010d450e2e04d5c1b18f1d183d2e = NULL;
    }

    assertFrameObject(frame_7740010d450e2e04d5c1b18f1d183d2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__translate);
    Py_DECREF(var__translate);
    var__translate = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var__translate);
    var__translate = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_gui$$$function__1_setupUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gui$$$function__1_setupUi,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_842a65b899bf895a618c74c50604361e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gui,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gui$$$function__2_retranslateUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gui$$$function__2_retranslateUi,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_7740010d450e2e04d5c1b18f1d183d2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gui,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gui$$$function__3_refresh() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_7c7210d1163a4a7121fe8b7b4bd4e300,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gui,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gui$$$function__4_type1() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_21fcfffb2945c11424ca22ed10fc01c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gui,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gui$$$function__5_type2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_f0524a6ec36591612a9bade5b7106f40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gui,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gui$$$function__6_return_func() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_bf0a4d068adb5a8251699a264a487350,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gui,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gui$$$function__7_run() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_11fa8bb8a4df2b2d298ccc136f7ab8d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gui,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gui$$$function__8_pic() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_a614ec54119295e2b91c015858a0feda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gui,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_gui[] = {
    impl_gui$$$function__1_setupUi,
    impl_gui$$$function__2_retranslateUi,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_gui;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_gui) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_gui[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_gui,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_gui(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("gui");

    // Store the module for future use.
    module_gui = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("gui: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("gui: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("gui: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initgui\n");

    moduledict_gui = MODULE_DICT(module_gui);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_gui,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_gui,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[184]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_gui,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_gui,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_gui,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_gui);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_gui, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_gui, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_gui, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_gui);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_gui, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_bbe304962055ce60a5060f4ec3f478ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_gui$$$class__1_Ui_widget_14 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7509c64846810b1d5cfeb57fd5ac8270_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_gui$$$class__2_Widget_338 = NULL;
    struct Nuitka_FrameObject *frame_27a0c76afce0e71732c204abcfd3bce9_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_27a0c76afce0e71732c204abcfd3bce9_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gui, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_gui, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_bbe304962055ce60a5060f4ec3f478ec = MAKE_MODULE_FRAME(codeobj_bbe304962055ce60a5060f4ec3f478ec, module_gui);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_bbe304962055ce60a5060f4ec3f478ec);
    assert(Py_REFCNT(frame_bbe304962055ce60a5060f4ec3f478ec) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[151], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[152], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gui, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[154];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_gui;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[155];
        tmp_level_value_1 = mod_consts[57];
        frame_bbe304962055ce60a5060f4ec3f478ec->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_gui,
                mod_consts[5],
                mod_consts[57]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[5]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_gui, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_gui,
                mod_consts[8],
                mod_consts[57]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[8]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_gui, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_gui,
                mod_consts[18],
                mod_consts[57]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[18]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_gui, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[156];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[157];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[157];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[57];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[157];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[157];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[158]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[158]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[159];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_bbe304962055ce60a5060f4ec3f478ec->m_frame.f_lineno = 14;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[160]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[161];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[162];
        tmp_getattr_default_1 = mod_consts[163];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[162]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_gui$$$class__1_Ui_widget_14 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_gui$$$class__1_Ui_widget_14, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyObject_SetItem(locals_gui$$$class__1_Ui_widget_14, mod_consts[166], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2)) {
            Py_XDECREF(cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2 = MAKE_FUNCTION_FRAME(codeobj_7509c64846810b1d5cfeb57fd5ac8270, module_gui, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2->m_type_description == NULL);
        frame_7509c64846810b1d5cfeb57fd5ac8270_2 = cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7509c64846810b1d5cfeb57fd5ac8270_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7509c64846810b1d5cfeb57fd5ac8270_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gui$$$function__1_setupUi();

        tmp_res = PyObject_SetItem(locals_gui$$$class__1_Ui_widget_14, mod_consts[167], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_gui$$$function__2_retranslateUi();

        tmp_res = PyObject_SetItem(locals_gui$$$class__1_Ui_widget_14, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7509c64846810b1d5cfeb57fd5ac8270_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7509c64846810b1d5cfeb57fd5ac8270_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7509c64846810b1d5cfeb57fd5ac8270_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7509c64846810b1d5cfeb57fd5ac8270_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7509c64846810b1d5cfeb57fd5ac8270_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7509c64846810b1d5cfeb57fd5ac8270_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_7509c64846810b1d5cfeb57fd5ac8270_2 == cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2);
            cache_frame_7509c64846810b1d5cfeb57fd5ac8270_2 = NULL;
        }

        assertFrameObject(frame_7509c64846810b1d5cfeb57fd5ac8270_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[156];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_gui$$$class__1_Ui_widget_14, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[159];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_gui$$$class__1_Ui_widget_14;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_bbe304962055ce60a5060f4ec3f478ec->m_frame.f_lineno = 14;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_gui$$$class__1_Ui_widget_14);
        locals_gui$$$class__1_Ui_widget_14 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gui$$$class__1_Ui_widget_14);
        locals_gui$$$class__1_Ui_widget_14 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 14;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_gui, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_13);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[29]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        tmp_assign_source_15 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_15, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_16 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[157];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[157];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[57];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_18 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[157];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[157];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 338;

        goto try_except_handler_5;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[158]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[158]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = mod_consts[171];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_bbe304962055ce60a5060f4ec3f478ec->m_frame.f_lineno = 338;
        tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[160]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_value_2 = mod_consts[161];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[162];
        tmp_getattr_default_2 = mod_consts[163];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        tmp_right_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[162]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_value_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_value_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 338;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_20;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_gui$$$class__2_Widget_338 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[166], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_27a0c76afce0e71732c204abcfd3bce9_3)) {
            Py_XDECREF(cache_frame_27a0c76afce0e71732c204abcfd3bce9_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_27a0c76afce0e71732c204abcfd3bce9_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_27a0c76afce0e71732c204abcfd3bce9_3 = MAKE_FUNCTION_FRAME(codeobj_27a0c76afce0e71732c204abcfd3bce9, module_gui, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_27a0c76afce0e71732c204abcfd3bce9_3->m_type_description == NULL);
        frame_27a0c76afce0e71732c204abcfd3bce9_3 = cache_frame_27a0c76afce0e71732c204abcfd3bce9_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_27a0c76afce0e71732c204abcfd3bce9_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_27a0c76afce0e71732c204abcfd3bce9_3) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gui$$$function__3_refresh();

        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[121], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_gui$$$function__4_type1();

        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[124], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_gui$$$function__5_type2();

        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[125], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_gui$$$function__6_return_func();

        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_gui$$$function__7_run();

        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[127], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_gui$$$function__8_pic();

        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_27a0c76afce0e71732c204abcfd3bce9_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_27a0c76afce0e71732c204abcfd3bce9_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_27a0c76afce0e71732c204abcfd3bce9_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_27a0c76afce0e71732c204abcfd3bce9_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_27a0c76afce0e71732c204abcfd3bce9_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_27a0c76afce0e71732c204abcfd3bce9_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_27a0c76afce0e71732c204abcfd3bce9_3 == cache_frame_27a0c76afce0e71732c204abcfd3bce9_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_27a0c76afce0e71732c204abcfd3bce9_3);
            cache_frame_27a0c76afce0e71732c204abcfd3bce9_3 = NULL;
        }

        assertFrameObject(frame_27a0c76afce0e71732c204abcfd3bce9_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_gui$$$class__2_Widget_338, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[171];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_gui$$$class__2_Widget_338;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_bbe304962055ce60a5060f4ec3f478ec->m_frame.f_lineno = 338;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_21 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_gui$$$class__2_Widget_338);
        locals_gui$$$class__2_Widget_338 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gui$$$class__2_Widget_338);
        locals_gui$$$class__2_Widget_338 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 338;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_gui, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_21);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbe304962055ce60a5060f4ec3f478ec);
#endif
    popFrameStack();

    assertFrameObject(frame_bbe304962055ce60a5060f4ec3f478ec);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbe304962055ce60a5060f4ec3f478ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbe304962055ce60a5060f4ec3f478ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbe304962055ce60a5060f4ec3f478ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbe304962055ce60a5060f4ec3f478ec, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("gui", false);

    return module_gui;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gui, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("gui", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
