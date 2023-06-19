/* Generated code for Python module '__main__'
 * created by Nuitka version 1.6.3
 *
 * This code is in part copyright 2023 Kay Hayen.
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

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[386];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[386];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("__main__"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 386; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 1
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 386; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c76b70dbf99f8c0bb37cd77f9ca63382;
static PyCodeObject *codeobj_001cc4a3201d9e76664d1d7cfa4f342d;
static PyCodeObject *codeobj_eb5999aced35de165c3cba13546350b7;
static PyCodeObject *codeobj_00c0b2369cdafe805f581dfced9f0e1d;
static PyCodeObject *codeobj_ff35353eafdd347b0427d2ba20ba8a7a;
static PyCodeObject *codeobj_71e0bc87aeed0e23396ebab863d03c00;
static PyCodeObject *codeobj_423847a907fe33697957c6d6dd249986;
static PyCodeObject *codeobj_7689733633d28c77cfa186ceb9cd6d88;
static PyCodeObject *codeobj_6311d8959048c770e9f026c44472d71a;
static PyCodeObject *codeobj_1f4061c4350ada229b59eab6dab37618;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[353]; CHECK_OBJECT(module_filename_obj);
    codeobj_c76b70dbf99f8c0bb37cd77f9ca63382 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[375], mod_consts[375], NULL, NULL, 0, 0, 0);
    codeobj_main = codeobj_c76b70dbf99f8c0bb37cd77f9ca63382;
    codeobj_001cc4a3201d9e76664d1d7cfa4f342d = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[376], NULL, 2, 0, 0);
    codeobj_eb5999aced35de165c3cba13546350b7 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[374], mod_consts[374], mod_consts[377], NULL, 0, 0, 0);
    codeobj_00c0b2369cdafe805f581dfced9f0e1d = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[378], NULL, 0, 0, 0);
    codeobj_ff35353eafdd347b0427d2ba20ba8a7a = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[379], NULL, 0, 0, 0);
    codeobj_71e0bc87aeed0e23396ebab863d03c00 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[122], mod_consts[122], mod_consts[380], mod_consts[381], 0, 0, 0);
    codeobj_423847a907fe33697957c6d6dd249986 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[373], mod_consts[373], mod_consts[382], NULL, 0, 0, 0);
    codeobj_7689733633d28c77cfa186ceb9cd6d88 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[383], NULL, 0, 0, 0);
    codeobj_6311d8959048c770e9f026c44472d71a = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[384], NULL, 1, 0, 0);
    codeobj_1f4061c4350ada229b59eab6dab37618 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[385], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function__1_update_layout();


static PyObject *MAKE_FUNCTION___main__$$$function__2_apk_name();


static PyObject *MAKE_FUNCTION___main__$$$function__3_main();


static PyObject *MAKE_FUNCTION___main__$$$function__3_main$$$function__1_layu();


static PyObject *MAKE_FUNCTION___main__$$$function__4_config_screen();


static PyObject *MAKE_FUNCTION___main__$$$function__4_config_screen$$$function__1_layu();


static PyObject *MAKE_FUNCTION___main__$$$function__5_read_config_from_json();


static PyObject *MAKE_FUNCTION___main__$$$function__6_profiles_screen();


static PyObject *MAKE_FUNCTION___main__$$$function__6_profiles_screen$$$function__1_layut(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl___main__$$$function__1_update_layout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_window = python_pars[0];
    PyObject *par_selected_option = python_pars[1];
    PyObject *par__ = python_pars[2];
    struct Nuitka_FrameObject *frame_1f4061c4350ada229b59eab6dab37618;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1f4061c4350ada229b59eab6dab37618 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1f4061c4350ada229b59eab6dab37618)) {
        Py_XDECREF(cache_frame_1f4061c4350ada229b59eab6dab37618);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1f4061c4350ada229b59eab6dab37618 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1f4061c4350ada229b59eab6dab37618 = MAKE_FUNCTION_FRAME(codeobj_1f4061c4350ada229b59eab6dab37618, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1f4061c4350ada229b59eab6dab37618->m_type_description == NULL);
    frame_1f4061c4350ada229b59eab6dab37618 = cache_frame_1f4061c4350ada229b59eab6dab37618;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1f4061c4350ada229b59eab6dab37618);
    assert(Py_REFCNT(frame_1f4061c4350ada229b59eab6dab37618) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_selected_option);
        tmp_cmp_expr_left_1 = par_selected_option;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_window);
        tmp_expression_value_2 = par_window;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 17;
        tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_window);
        tmp_expression_value_4 = par_window;
        tmp_subscript_value_2 = mod_consts[5];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 18;
        tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_window);
        tmp_expression_value_6 = par_window;
        tmp_subscript_value_3 = mod_consts[6];
        tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 19;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_window);
        tmp_expression_value_8 = par_window;
        tmp_subscript_value_4 = mod_consts[7];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 20;
        tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_window);
        tmp_expression_value_10 = par_window;
        tmp_subscript_value_5 = mod_consts[8];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[2]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 21;
        tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[9], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_selected_option);
        tmp_cmp_expr_left_2 = par_selected_option;
        tmp_cmp_expr_right_2 = mod_consts[10];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_window);
        tmp_expression_value_12 = par_window;
        tmp_subscript_value_6 = mod_consts[1];
        tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[2]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 23;
        tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_window);
        tmp_expression_value_14 = par_window;
        tmp_subscript_value_7 = mod_consts[5];
        tmp_expression_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_7);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[2]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 24;
        tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_window);
        tmp_expression_value_16 = par_window;
        tmp_subscript_value_8 = mod_consts[6];
        tmp_expression_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_8);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[2]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 25;
        tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_window);
        tmp_expression_value_18 = par_window;
        tmp_subscript_value_9 = mod_consts[7];
        tmp_expression_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_9);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[2]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 26;
        tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[9], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(par_window);
        tmp_expression_value_20 = par_window;
        tmp_subscript_value_10 = mod_consts[8];
        tmp_expression_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_10);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[2]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 27;
        tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_selected_option);
        tmp_cmp_expr_left_3 = par_selected_option;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(par_window);
        tmp_expression_value_22 = par_window;
        tmp_subscript_value_11 = mod_consts[1];
        tmp_expression_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_11);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[2]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 29;
        tmp_call_result_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(par_window);
        tmp_expression_value_24 = par_window;
        tmp_subscript_value_12 = mod_consts[5];
        tmp_expression_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_12);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[2]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 30;
        tmp_call_result_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(par_window);
        tmp_expression_value_26 = par_window;
        tmp_subscript_value_13 = mod_consts[6];
        tmp_expression_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_13);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[2]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 31;
        tmp_call_result_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[9], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(par_window);
        tmp_expression_value_28 = par_window;
        tmp_subscript_value_14 = mod_consts[7];
        tmp_expression_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_14);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[2]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 32;
        tmp_call_result_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(par_window);
        tmp_expression_value_30 = par_window;
        tmp_subscript_value_15 = mod_consts[8];
        tmp_expression_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_15);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[2]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 33;
        tmp_call_result_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_selected_option);
        tmp_cmp_expr_left_4 = par_selected_option;
        tmp_cmp_expr_right_4 = mod_consts[12];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(par_window);
        tmp_expression_value_32 = par_window;
        tmp_subscript_value_16 = mod_consts[1];
        tmp_expression_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_16);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[2]);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 35;
        tmp_call_result_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(par_window);
        tmp_expression_value_34 = par_window;
        tmp_subscript_value_17 = mod_consts[5];
        tmp_expression_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_17);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[2]);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 36;
        tmp_call_result_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[9], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(par_window);
        tmp_expression_value_36 = par_window;
        tmp_subscript_value_18 = mod_consts[6];
        tmp_expression_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_18);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[2]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 37;
        tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(par_window);
        tmp_expression_value_38 = par_window;
        tmp_subscript_value_19 = mod_consts[7];
        tmp_expression_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_19);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[2]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 38;
        tmp_call_result_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(par_window);
        tmp_expression_value_40 = par_window;
        tmp_subscript_value_20 = mod_consts[8];
        tmp_expression_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_20);
        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[2]);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 39;
        tmp_call_result_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_selected_option);
        tmp_cmp_expr_left_5 = par_selected_option;
        tmp_cmp_expr_right_5 = mod_consts[13];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(par_window);
        tmp_expression_value_42 = par_window;
        tmp_subscript_value_21 = mod_consts[1];
        tmp_expression_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_21);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[2]);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 41;
        tmp_call_result_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[9], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(par_window);
        tmp_expression_value_44 = par_window;
        tmp_subscript_value_22 = mod_consts[5];
        tmp_expression_value_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_22);
        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[2]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 42;
        tmp_call_result_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_call_result_23;
        CHECK_OBJECT(par_window);
        tmp_expression_value_46 = par_window;
        tmp_subscript_value_23 = mod_consts[6];
        tmp_expression_value_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_23);
        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[2]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 43;
        tmp_call_result_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_call_result_24;
        CHECK_OBJECT(par_window);
        tmp_expression_value_48 = par_window;
        tmp_subscript_value_24 = mod_consts[7];
        tmp_expression_value_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_24);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[2]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 44;
        tmp_call_result_24 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_call_result_25;
        CHECK_OBJECT(par_window);
        tmp_expression_value_50 = par_window;
        tmp_subscript_value_25 = mod_consts[8];
        tmp_expression_value_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_25);
        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[2]);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 45;
        tmp_call_result_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_call_result_26;
        CHECK_OBJECT(par_window);
        tmp_expression_value_52 = par_window;
        tmp_subscript_value_26 = mod_consts[1];
        tmp_expression_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_26);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[2]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 47;
        tmp_call_result_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_call_result_27;
        CHECK_OBJECT(par_window);
        tmp_expression_value_54 = par_window;
        tmp_subscript_value_27 = mod_consts[5];
        tmp_expression_value_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_27);
        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[2]);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 48;
        tmp_call_result_27 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_call_result_28;
        CHECK_OBJECT(par_window);
        tmp_expression_value_56 = par_window;
        tmp_subscript_value_28 = mod_consts[6];
        tmp_expression_value_55 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_28);
        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[2]);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 49;
        tmp_call_result_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_call_result_29;
        CHECK_OBJECT(par_window);
        tmp_expression_value_58 = par_window;
        tmp_subscript_value_29 = mod_consts[7];
        tmp_expression_value_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_29);
        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[2]);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 50;
        tmp_call_result_29 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_call_result_30;
        CHECK_OBJECT(par_window);
        tmp_expression_value_60 = par_window;
        tmp_subscript_value_30 = mod_consts[8];
        tmp_expression_value_59 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_30);
        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[2]);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1f4061c4350ada229b59eab6dab37618->m_frame.f_lineno = 51;
        tmp_call_result_30 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[3], 0), mod_consts[4]);
        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f4061c4350ada229b59eab6dab37618, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f4061c4350ada229b59eab6dab37618->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f4061c4350ada229b59eab6dab37618, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1f4061c4350ada229b59eab6dab37618,
        type_description_1,
        par_window,
        par_selected_option,
        par__
    );


    // Release cached frame if used for exception.
    if (frame_1f4061c4350ada229b59eab6dab37618 == cache_frame_1f4061c4350ada229b59eab6dab37618) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1f4061c4350ada229b59eab6dab37618);
        cache_frame_1f4061c4350ada229b59eab6dab37618 = NULL;
    }

    assertFrameObject(frame_1f4061c4350ada229b59eab6dab37618);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_window);
    Py_DECREF(par_window);
    CHECK_OBJECT(par_selected_option);
    Py_DECREF(par_selected_option);
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_window);
    Py_DECREF(par_window);
    CHECK_OBJECT(par_selected_option);
    Py_DECREF(par_selected_option);
    CHECK_OBJECT(par__);
    Py_DECREF(par__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__2_apk_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_option = python_pars[0];
    PyObject *par_profile = python_pars[1];
    PyObject *var_file = NULL;
    PyObject *var_name_apk = NULL;
    struct Nuitka_FrameObject *frame_001cc4a3201d9e76664d1d7cfa4f342d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_001cc4a3201d9e76664d1d7cfa4f342d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_001cc4a3201d9e76664d1d7cfa4f342d)) {
        Py_XDECREF(cache_frame_001cc4a3201d9e76664d1d7cfa4f342d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_001cc4a3201d9e76664d1d7cfa4f342d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_001cc4a3201d9e76664d1d7cfa4f342d = MAKE_FUNCTION_FRAME(codeobj_001cc4a3201d9e76664d1d7cfa4f342d, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_001cc4a3201d9e76664d1d7cfa4f342d->m_type_description == NULL);
    frame_001cc4a3201d9e76664d1d7cfa4f342d = cache_frame_001cc4a3201d9e76664d1d7cfa4f342d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_001cc4a3201d9e76664d1d7cfa4f342d);
    assert(Py_REFCNT(frame_001cc4a3201d9e76664d1d7cfa4f342d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_001cc4a3201d9e76664d1d7cfa4f342d->m_frame.f_lineno = 54;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_file == NULL);
        var_file = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_001cc4a3201d9e76664d1d7cfa4f342d->m_frame.f_lineno = 55;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_001cc4a3201d9e76664d1d7cfa4f342d->m_frame.f_lineno = 56;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[19]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_file);
        tmp_cmp_expr_left_1 = var_file;
        tmp_cmp_expr_right_1 = mod_consts[20];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_001cc4a3201d9e76664d1d7cfa4f342d->m_frame.f_lineno = 59;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_option);
        tmp_cmp_expr_left_2 = par_option;
        tmp_cmp_expr_right_2 = mod_consts[0];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[24];
        assert(var_name_apk == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_name_apk = tmp_assign_source_2;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_option);
        tmp_cmp_expr_left_3 = par_option;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[25];
        {
            PyObject *old = var_name_apk;
            var_name_apk = tmp_assign_source_3;
            Py_INCREF(var_name_apk);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_option);
        tmp_cmp_expr_left_4 = par_option;
        tmp_cmp_expr_right_4 = mod_consts[12];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[26];
        {
            PyObject *old = var_name_apk;
            var_name_apk = tmp_assign_source_4;
            Py_INCREF(var_name_apk);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_option);
        tmp_cmp_expr_left_5 = par_option;
        tmp_cmp_expr_right_5 = mod_consts[13];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[26];
        {
            PyObject *old = var_name_apk;
            var_name_apk = tmp_assign_source_5;
            Py_INCREF(var_name_apk);
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_option);
        tmp_cmp_expr_left_6 = par_option;
        tmp_cmp_expr_right_6 = mod_consts[10];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[26];
        {
            PyObject *old = var_name_apk;
            var_name_apk = tmp_assign_source_6;
            Py_INCREF(var_name_apk);
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_option);
        tmp_cmp_expr_left_7 = par_option;
        tmp_cmp_expr_right_7 = mod_consts[27];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[28];
        {
            PyObject *old = var_name_apk;
            var_name_apk = tmp_assign_source_7;
            Py_INCREF(var_name_apk);
            Py_XDECREF(old);
        }

    }
    branch_no_7:;
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_option);
        tmp_cmp_expr_left_8 = par_option;
        tmp_cmp_expr_right_8 = mod_consts[20];
        tmp_value_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_option);
        tmp_args_element_value_1 = par_option;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_2 = var_file;
        if (var_name_apk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_name_apk;
        CHECK_OBJECT(par_profile);
        tmp_args_element_value_4 = par_profile;
        frame_001cc4a3201d9e76664d1d7cfa4f342d->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_001cc4a3201d9e76664d1d7cfa4f342d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_001cc4a3201d9e76664d1d7cfa4f342d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_001cc4a3201d9e76664d1d7cfa4f342d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_001cc4a3201d9e76664d1d7cfa4f342d,
        type_description_1,
        par_option,
        par_profile,
        var_file,
        var_name_apk
    );


    // Release cached frame if used for exception.
    if (frame_001cc4a3201d9e76664d1d7cfa4f342d == cache_frame_001cc4a3201d9e76664d1d7cfa4f342d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_001cc4a3201d9e76664d1d7cfa4f342d);
        cache_frame_001cc4a3201d9e76664d1d7cfa4f342d = NULL;
    }

    assertFrameObject(frame_001cc4a3201d9e76664d1d7cfa4f342d);

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
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_name_apk);
    var_name_apk = NULL;
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

    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_name_apk);
    var_name_apk = NULL;
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
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);
    CHECK_OBJECT(par_profile);
    Py_DECREF(par_profile);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);
    CHECK_OBJECT(par_profile);
    Py_DECREF(par_profile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__3_main(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_layu = NULL;
    PyObject *var_layout = NULL;
    PyObject *var_window = NULL;
    PyObject *var_event = NULL;
    PyObject *var_values = NULL;
    PyObject *var_profile = NULL;
    PyObject *var_selected_option = NULL;
    PyObject *var_estatos = NULL;
    PyObject *var_selected_app = NULL;
    PyObject *var_selected_profile = NULL;
    PyObject *var_url = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_423847a907fe33697957c6d6dd249986;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_423847a907fe33697957c6d6dd249986 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_423847a907fe33697957c6d6dd249986)) {
        Py_XDECREF(cache_frame_423847a907fe33697957c6d6dd249986);

#if _DEBUG_REFCOUNTS
        if (cache_frame_423847a907fe33697957c6d6dd249986 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_423847a907fe33697957c6d6dd249986 = MAKE_FUNCTION_FRAME(codeobj_423847a907fe33697957c6d6dd249986, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_423847a907fe33697957c6d6dd249986->m_type_description == NULL);
    frame_423847a907fe33697957c6d6dd249986 = cache_frame_423847a907fe33697957c6d6dd249986;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_423847a907fe33697957c6d6dd249986);
    assert(Py_REFCNT(frame_423847a907fe33697957c6d6dd249986) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION___main__$$$function__3_main$$$function__1_layu();

        assert(var_layu == NULL);
        var_layu = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 118;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(var_layu);
        tmp_called_value_2 = var_layu;
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 120;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[37];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_layout);
        tmp_tuple_element_1 = var_layout;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[38]);
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 123;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_3;
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_window;
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 127;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[40]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 127;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 127;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 127;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[41];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 127;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_7;
            Py_INCREF(var_event);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_values;
            var_values = tmp_assign_source_8;
            Py_INCREF(var_values);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_1 = var_event;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_2 = var_event;
        tmp_cmp_expr_right_2 = mod_consts[43];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_3 = var_event;
        tmp_cmp_expr_right_3 = mod_consts[44];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_values);
        tmp_expression_value_3 = var_values;
        tmp_subscript_value_1 = mod_consts[45];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_profile;
            var_profile = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_values);
        tmp_expression_value_4 = var_values;
        tmp_subscript_value_2 = mod_consts[46];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_selected_option;
            var_selected_option = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_selected_option);
        tmp_cmp_expr_left_4 = var_selected_option;
        tmp_cmp_expr_right_4 = mod_consts[20];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_selected_option);
        tmp_args_element_value_1 = var_selected_option;
        CHECK_OBJECT(var_profile);
        tmp_args_element_value_2 = var_profile;
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 143;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_5 = var_event;
        tmp_cmp_expr_right_5 = mod_consts[2];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 146;
        tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_estatos;
            var_estatos = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_estatos);
        tmp_cmp_expr_left_6 = var_estatos;
        tmp_cmp_expr_right_6 = mod_consts[50];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[22]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 148;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[51], 0), mod_consts[52]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_5;
    branch_no_5:;
    // Tried code:
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_6;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 151;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_7;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 152;
        tmp_call_result_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_423847a907fe33697957c6d6dd249986, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_423847a907fe33697957c6d6dd249986, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_8;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 154;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    branch_end_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_7 = var_event;
        tmp_cmp_expr_right_7 = mod_consts[46];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_values);
        tmp_expression_value_6 = var_values;
        tmp_subscript_value_3 = mod_consts[46];
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_selected_app;
            var_selected_app = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_values);
        tmp_expression_value_7 = var_values;
        tmp_subscript_value_4 = mod_consts[45];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_selected_profile;
            var_selected_profile = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_window;
        CHECK_OBJECT(var_selected_app);
        tmp_args_element_value_4 = var_selected_app;
        CHECK_OBJECT(var_selected_profile);
        tmp_args_element_value_5 = var_selected_profile;
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_8 = var_event;
        tmp_cmp_expr_right_8 = mod_consts[57];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[58];
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_14;
            Py_INCREF(var_url);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url);
        tmp_args_element_value_6 = var_url;
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 164;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[60], tmp_args_element_value_6);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_9 = var_event;
        tmp_cmp_expr_right_9 = mod_consts[61];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[62];
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_15;
            Py_INCREF(var_url);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url);
        tmp_args_element_value_7 = var_url;
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 168;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[60], tmp_args_element_value_7);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_10 = var_event;
        tmp_cmp_expr_right_10 = mod_consts[63];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_12;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[16]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 171;
        tmp_call_result_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[17]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_13;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 172;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[64]);

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_14;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 173;
        tmp_call_result_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_15;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 174;
        tmp_call_result_15 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_4:;
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 126;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_16;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = var_window;
        frame_423847a907fe33697957c6d6dd249986->m_frame.f_lineno = 177;
        tmp_call_result_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[66]);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_423847a907fe33697957c6d6dd249986, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_423847a907fe33697957c6d6dd249986->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_423847a907fe33697957c6d6dd249986, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_423847a907fe33697957c6d6dd249986,
        type_description_1,
        var_layu,
        var_layout,
        var_window,
        var_event,
        var_values,
        var_profile,
        var_selected_option,
        var_estatos,
        var_selected_app,
        var_selected_profile,
        var_url
    );


    // Release cached frame if used for exception.
    if (frame_423847a907fe33697957c6d6dd249986 == cache_frame_423847a907fe33697957c6d6dd249986) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_423847a907fe33697957c6d6dd249986);
        cache_frame_423847a907fe33697957c6d6dd249986 = NULL;
    }

    assertFrameObject(frame_423847a907fe33697957c6d6dd249986);

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
    CHECK_OBJECT(var_layu);
    Py_DECREF(var_layu);
    var_layu = NULL;
    CHECK_OBJECT(var_layout);
    Py_DECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_profile);
    var_profile = NULL;
    Py_XDECREF(var_selected_option);
    var_selected_option = NULL;
    Py_XDECREF(var_estatos);
    var_estatos = NULL;
    Py_XDECREF(var_selected_app);
    var_selected_app = NULL;
    Py_XDECREF(var_selected_profile);
    var_selected_profile = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_layu);
    var_layu = NULL;
    Py_XDECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_profile);
    var_profile = NULL;
    Py_XDECREF(var_selected_option);
    var_selected_option = NULL;
    Py_XDECREF(var_estatos);
    var_estatos = NULL;
    Py_XDECREF(var_selected_app);
    var_selected_app = NULL;
    Py_XDECREF(var_selected_profile);
    var_selected_profile = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__3_main$$$function__1_layu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_compatible = NULL;
    PyObject *var_estatos = NULL;
    PyObject *var_menu_layout = NULL;
    PyObject *var_options = NULL;
    PyObject *var_profiles = NULL;
    PyObject *var_layout = NULL;
    struct Nuitka_FrameObject *frame_00c0b2369cdafe805f581dfced9f0e1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00c0b2369cdafe805f581dfced9f0e1d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_00c0b2369cdafe805f581dfced9f0e1d)) {
        Py_XDECREF(cache_frame_00c0b2369cdafe805f581dfced9f0e1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00c0b2369cdafe805f581dfced9f0e1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00c0b2369cdafe805f581dfced9f0e1d = MAKE_FUNCTION_FRAME(codeobj_00c0b2369cdafe805f581dfced9f0e1d, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00c0b2369cdafe805f581dfced9f0e1d->m_type_description == NULL);
    frame_00c0b2369cdafe805f581dfced9f0e1d = cache_frame_00c0b2369cdafe805f581dfced9f0e1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_00c0b2369cdafe805f581dfced9f0e1d);
    assert(Py_REFCNT(frame_00c0b2369cdafe805f581dfced9f0e1d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 74;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_compatible == NULL);
        var_compatible = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 75;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_estatos == NULL);
        var_estatos = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = DEEP_COPY_LIST_GUIDED(mod_consts[68], "LilLilLil");
        assert(var_menu_layout == NULL);
        var_menu_layout = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST7(mod_consts[69]);
        assert(var_options == NULL);
        var_options = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST3(mod_consts[20],mod_consts[70],mod_consts[71]);
        assert(var_profiles == NULL);
        var_profiles = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_menu_layout);
        tmp_args_element_value_1 = var_menu_layout;
        frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 87;
        tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[72], tmp_args_element_value_1);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
        tmp_assign_source_6 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_list_element_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_6, 0, tmp_list_element_1);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[73]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[74]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 89;
            tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[75], 0), mod_consts[76]);
            Py_DECREF(tmp_called_value_4);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_4 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_called_value_5;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_called_value_6;
                PyObject *tmp_expression_value_4;
                PyObject *tmp_args_element_value_3;
                PyObject *tmp_string_concat_values_1;
                PyObject *tmp_tuple_element_1;
                PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_5);
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto list_build_exception_2;
                }
                tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[74]);
                if (tmp_called_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto list_build_exception_2;
                }
                frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 89;
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[77], 0), mod_consts[78]);
                Py_DECREF(tmp_called_value_5);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_5);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto list_build_exception_2;
                }
                tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[74]);
                if (tmp_called_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto list_build_exception_2;
                }
                tmp_tuple_element_1 = mod_consts[79];
                tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_format_value_1;
                    PyObject *tmp_format_spec_1;
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                    CHECK_OBJECT(var_estatos);
                    tmp_format_value_1 = var_estatos;
                    tmp_format_spec_1 = mod_consts[20];
                    tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 89;
                        type_description_1 = "oooooo";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                }
                goto tuple_build_noexception_1;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_1:;
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_string_concat_values_1);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_1:;
                tmp_args_element_value_3 = PyUnicode_Join(mod_consts[20], tmp_string_concat_values_1);
                Py_DECREF(tmp_string_concat_values_1);
                if (tmp_args_element_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_6);

                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto list_build_exception_2;
                }
                frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 89;
                tmp_list_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_args_element_value_3);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_5);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_list_element_4);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_args_element_value_2 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_list_element_6;
                PyObject *tmp_called_value_7;
                PyObject *tmp_expression_value_5;
                PyObject *tmp_list_element_7;
                PyObject *tmp_called_value_15;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_list_element_8;
                PyObject *tmp_called_value_17;
                PyObject *tmp_expression_value_19;
                PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_4);
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[74]);
                if (tmp_called_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 91;
                tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[80], 0), mod_consts[76]);
                Py_DECREF(tmp_called_value_7);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(8);
                {
                    PyObject *tmp_called_value_8;
                    PyObject *tmp_expression_value_6;
                    PyObject *tmp_args_value_1;
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_kwargs_value_1;
                    PyObject *tmp_called_value_9;
                    PyObject *tmp_expression_value_7;
                    PyObject *tmp_called_value_10;
                    PyObject *tmp_expression_value_8;
                    PyObject *tmp_args_value_2;
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_expression_value_9;
                    PyObject *tmp_subscript_value_1;
                    PyObject *tmp_kwargs_value_2;
                    PyObject *tmp_called_value_11;
                    PyObject *tmp_expression_value_10;
                    PyObject *tmp_args_value_3;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_expression_value_11;
                    PyObject *tmp_subscript_value_2;
                    PyObject *tmp_kwargs_value_3;
                    PyObject *tmp_called_value_12;
                    PyObject *tmp_expression_value_12;
                    PyObject *tmp_args_value_4;
                    PyObject *tmp_tuple_element_5;
                    PyObject *tmp_expression_value_13;
                    PyObject *tmp_subscript_value_3;
                    PyObject *tmp_kwargs_value_4;
                    PyObject *tmp_called_value_13;
                    PyObject *tmp_expression_value_14;
                    PyObject *tmp_called_value_14;
                    PyObject *tmp_expression_value_15;
                    PyObject *tmp_args_value_5;
                    PyObject *tmp_tuple_element_6;
                    PyObject *tmp_expression_value_16;
                    PyObject *tmp_subscript_value_4;
                    PyObject *tmp_kwargs_value_5;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_6);
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[81]);
                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    CHECK_OBJECT(var_options);
                    tmp_tuple_element_2 = var_options;
                    tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
                    PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
                    tmp_kwargs_value_1 = DICT_COPY(mod_consts[82]);
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 92;
                    tmp_list_element_6 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
                    Py_DECREF(tmp_called_value_8);
                    Py_DECREF(tmp_args_value_1);
                    Py_DECREF(tmp_kwargs_value_1);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_6);
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[74]);
                    if (tmp_called_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 93;
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[83], 0), mod_consts[84]);
                    Py_DECREF(tmp_called_value_9);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_6);
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[74]);
                    if (tmp_called_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    CHECK_OBJECT(var_compatible);
                    tmp_expression_value_9 = var_compatible;
                    tmp_subscript_value_1 = mod_consts[85];
                    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_1, 0);
                    if (tmp_tuple_element_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 94;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
                    PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_3);
                    tmp_kwargs_value_2 = DICT_COPY(mod_consts[86]);
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 94;
                    tmp_list_element_6 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
                    Py_DECREF(tmp_called_value_10);
                    Py_DECREF(tmp_args_value_2);
                    Py_DECREF(tmp_kwargs_value_2);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 3, tmp_list_element_6);
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[74]);
                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    CHECK_OBJECT(var_compatible);
                    tmp_expression_value_11 = var_compatible;
                    tmp_subscript_value_2 = mod_consts[87];
                    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_2, 1);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 95;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
                    PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_4);
                    tmp_kwargs_value_3 = DICT_COPY(mod_consts[88]);
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 95;
                    tmp_list_element_6 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
                    Py_DECREF(tmp_called_value_11);
                    Py_DECREF(tmp_args_value_3);
                    Py_DECREF(tmp_kwargs_value_3);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 4, tmp_list_element_6);
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 96;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[74]);
                    if (tmp_called_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 96;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    CHECK_OBJECT(var_compatible);
                    tmp_expression_value_13 = var_compatible;
                    tmp_subscript_value_3 = mod_consts[89];
                    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_3, 2);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 96;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
                    PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_5);
                    tmp_kwargs_value_4 = DICT_COPY(mod_consts[90]);
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 96;
                    tmp_list_element_6 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_4, tmp_kwargs_value_4);
                    Py_DECREF(tmp_called_value_12);
                    Py_DECREF(tmp_args_value_4);
                    Py_DECREF(tmp_kwargs_value_4);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 96;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 5, tmp_list_element_6);
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[74]);
                    if (tmp_called_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 97;
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[91], 0), mod_consts[92]);
                    Py_DECREF(tmp_called_value_13);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 6, tmp_list_element_6);
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[74]);
                    if (tmp_called_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    CHECK_OBJECT(var_compatible);
                    tmp_expression_value_16 = var_compatible;
                    tmp_subscript_value_4 = mod_consts[93];
                    tmp_tuple_element_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 4);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 98;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    tmp_args_value_5 = MAKE_TUPLE_EMPTY(1);
                    PyTuple_SET_ITEM(tmp_args_value_5, 0, tmp_tuple_element_6);
                    tmp_kwargs_value_5 = DICT_COPY(mod_consts[94]);
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 98;
                    tmp_list_element_6 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_5, tmp_kwargs_value_5);
                    Py_DECREF(tmp_called_value_14);
                    Py_DECREF(tmp_args_value_5);
                    Py_DECREF(tmp_kwargs_value_5);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;
                        type_description_1 = "oooooo";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 7, tmp_list_element_6);
                }
                goto list_build_noexception_2;
                // Exception handling pass through code for list_build:
                list_build_exception_4:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_2:;
                PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_4);
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[74]);
                if (tmp_called_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 101;
                tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[95], 0), mod_consts[76]);
                Py_DECREF(tmp_called_value_15);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_16;
                    PyObject *tmp_expression_value_18;
                    PyObject *tmp_args_value_6;
                    PyObject *tmp_tuple_element_7;
                    PyObject *tmp_kwargs_value_6;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_7);
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "oooooo";
                        goto list_build_exception_5;
                    }
                    tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[81]);
                    if (tmp_called_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "oooooo";
                        goto list_build_exception_5;
                    }
                    CHECK_OBJECT(var_profiles);
                    tmp_tuple_element_7 = var_profiles;
                    tmp_args_value_6 = MAKE_TUPLE_EMPTY(1);
                    PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_7);
                    tmp_kwargs_value_6 = DICT_COPY(mod_consts[96]);
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 102;
                    tmp_list_element_7 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_6, tmp_kwargs_value_6);
                    Py_DECREF(tmp_called_value_16);
                    Py_DECREF(tmp_args_value_6);
                    Py_DECREF(tmp_kwargs_value_6);
                    if (tmp_list_element_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "oooooo";
                        goto list_build_exception_5;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_7);
                }
                goto list_build_noexception_3;
                // Exception handling pass through code for list_build:
                list_build_exception_5:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_3:;
                PyList_SET_ITEM(tmp_args_element_value_2, 2, tmp_list_element_4);
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[97]);
                if (tmp_called_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 106;
                tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[99]);
                Py_DECREF(tmp_called_value_17);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_1 = "oooooo";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_18;
                    PyObject *tmp_expression_value_20;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_8);
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_1 = "oooooo";
                        goto list_build_exception_6;
                    }
                    tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[97]);
                    if (tmp_called_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_1 = "oooooo";
                        goto list_build_exception_6;
                    }
                    frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 107;
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[100], 0), mod_consts[101]);
                    Py_DECREF(tmp_called_value_18);
                    if (tmp_list_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_1 = "oooooo";
                        goto list_build_exception_6;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_8);
                }
                goto list_build_noexception_4;
                // Exception handling pass through code for list_build:
                list_build_exception_6:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_4:;
                PyList_SET_ITEM(tmp_args_element_value_2, 3, tmp_list_element_4);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame.f_lineno = 88;
            tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_3);
            PyList_SET_ITEM(tmp_assign_source_6, 1, tmp_list_element_1);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_6;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_00c0b2369cdafe805f581dfced9f0e1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00c0b2369cdafe805f581dfced9f0e1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00c0b2369cdafe805f581dfced9f0e1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00c0b2369cdafe805f581dfced9f0e1d,
        type_description_1,
        var_compatible,
        var_estatos,
        var_menu_layout,
        var_options,
        var_profiles,
        var_layout
    );


    // Release cached frame if used for exception.
    if (frame_00c0b2369cdafe805f581dfced9f0e1d == cache_frame_00c0b2369cdafe805f581dfced9f0e1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00c0b2369cdafe805f581dfced9f0e1d);
        cache_frame_00c0b2369cdafe805f581dfced9f0e1d = NULL;
    }

    assertFrameObject(frame_00c0b2369cdafe805f581dfced9f0e1d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_layout);
    tmp_return_value = var_layout;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_compatible);
    Py_DECREF(var_compatible);
    var_compatible = NULL;
    CHECK_OBJECT(var_estatos);
    Py_DECREF(var_estatos);
    var_estatos = NULL;
    CHECK_OBJECT(var_menu_layout);
    Py_DECREF(var_menu_layout);
    var_menu_layout = NULL;
    CHECK_OBJECT(var_options);
    Py_DECREF(var_options);
    var_options = NULL;
    CHECK_OBJECT(var_profiles);
    Py_DECREF(var_profiles);
    var_profiles = NULL;
    CHECK_OBJECT(var_layout);
    Py_DECREF(var_layout);
    var_layout = NULL;
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

    Py_XDECREF(var_compatible);
    var_compatible = NULL;
    Py_XDECREF(var_estatos);
    var_estatos = NULL;
    Py_XDECREF(var_menu_layout);
    var_menu_layout = NULL;
    Py_XDECREF(var_options);
    var_options = NULL;
    Py_XDECREF(var_profiles);
    var_profiles = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__4_config_screen(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_layu = NULL;
    PyObject *var_layout = NULL;
    PyObject *var_window = NULL;
    PyObject *var_event = NULL;
    PyObject *var_values = NULL;
    PyObject *var_selected_option = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_eb5999aced35de165c3cba13546350b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_eb5999aced35de165c3cba13546350b7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION___main__$$$function__4_config_screen$$$function__1_layu();

        assert(var_layu == NULL);
        var_layu = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_eb5999aced35de165c3cba13546350b7)) {
        Py_XDECREF(cache_frame_eb5999aced35de165c3cba13546350b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb5999aced35de165c3cba13546350b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb5999aced35de165c3cba13546350b7 = MAKE_FUNCTION_FRAME(codeobj_eb5999aced35de165c3cba13546350b7, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb5999aced35de165c3cba13546350b7->m_type_description == NULL);
    frame_eb5999aced35de165c3cba13546350b7 = cache_frame_eb5999aced35de165c3cba13546350b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb5999aced35de165c3cba13546350b7);
    assert(Py_REFCNT(frame_eb5999aced35de165c3cba13546350b7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_eb5999aced35de165c3cba13546350b7->m_frame.f_lineno = 200;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[103], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_layu);
        tmp_called_value_1 = var_layu;
        frame_eb5999aced35de165c3cba13546350b7->m_frame.f_lineno = 202;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[37];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_layout);
        tmp_tuple_element_1 = var_layout;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[38]);
        frame_eb5999aced35de165c3cba13546350b7->m_frame.f_lineno = 205;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_3;
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_window;
        frame_eb5999aced35de165c3cba13546350b7->m_frame.f_lineno = 209;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[40]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 209;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 209;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 209;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[41];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 209;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_7;
            Py_INCREF(var_event);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_values;
            var_values = tmp_assign_source_8;
            Py_INCREF(var_values);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_1 = var_event;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_2 = var_event;
        tmp_cmp_expr_right_2 = mod_consts[43];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_3 = var_event;
        tmp_cmp_expr_right_3 = mod_consts[46];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_values);
        tmp_expression_value_3 = var_values;
        tmp_subscript_value_1 = mod_consts[46];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_selected_option;
            var_selected_option = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = var_window;
        CHECK_OBJECT(var_selected_option);
        tmp_args_element_value_2 = var_selected_option;
        frame_eb5999aced35de165c3cba13546350b7->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_4 = var_event;
        tmp_cmp_expr_right_4 = mod_consts[104];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_window;
        frame_eb5999aced35de165c3cba13546350b7->m_frame.f_lineno = 220;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[66]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_window;
        frame_eb5999aced35de165c3cba13546350b7->m_frame.f_lineno = 227;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[66]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eb5999aced35de165c3cba13546350b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb5999aced35de165c3cba13546350b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb5999aced35de165c3cba13546350b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb5999aced35de165c3cba13546350b7,
        type_description_1,
        var_layu,
        var_layout,
        var_window,
        var_event,
        var_values,
        var_selected_option
    );


    // Release cached frame if used for exception.
    if (frame_eb5999aced35de165c3cba13546350b7 == cache_frame_eb5999aced35de165c3cba13546350b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb5999aced35de165c3cba13546350b7);
        cache_frame_eb5999aced35de165c3cba13546350b7 = NULL;
    }

    assertFrameObject(frame_eb5999aced35de165c3cba13546350b7);

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
    CHECK_OBJECT(var_layu);
    Py_DECREF(var_layu);
    var_layu = NULL;
    CHECK_OBJECT(var_layout);
    Py_DECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_selected_option);
    var_selected_option = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_layu);
    Py_DECREF(var_layu);
    var_layu = NULL;
    Py_XDECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_selected_option);
    var_selected_option = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__4_config_screen$$$function__1_layu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_estatos = NULL;
    PyObject *var_pathe = NULL;
    PyObject *var_main_path = NULL;
    PyObject *var_layout = NULL;
    struct Nuitka_FrameObject *frame_ff35353eafdd347b0427d2ba20ba8a7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff35353eafdd347b0427d2ba20ba8a7a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ff35353eafdd347b0427d2ba20ba8a7a)) {
        Py_XDECREF(cache_frame_ff35353eafdd347b0427d2ba20ba8a7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff35353eafdd347b0427d2ba20ba8a7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff35353eafdd347b0427d2ba20ba8a7a = MAKE_FUNCTION_FRAME(codeobj_ff35353eafdd347b0427d2ba20ba8a7a, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff35353eafdd347b0427d2ba20ba8a7a->m_type_description == NULL);
    frame_ff35353eafdd347b0427d2ba20ba8a7a = cache_frame_ff35353eafdd347b0427d2ba20ba8a7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff35353eafdd347b0427d2ba20ba8a7a);
    assert(Py_REFCNT(frame_ff35353eafdd347b0427d2ba20ba8a7a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 182;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_estatos == NULL);
        var_estatos = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 183;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_pathe == NULL);
        var_pathe = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_pathe);
        tmp_expression_value_1 = var_pathe;
        tmp_subscript_value_1 = mod_consts[87];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_main_path == NULL);
        var_main_path = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_3;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[73]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[74]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 188;
        tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_1;
            PyList_SET_ITEM(tmp_list_element_3, 0, tmp_list_element_4);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[74]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 188;
            tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[77], 0), mod_consts[78]);
            Py_DECREF(tmp_called_value_5);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_list_element_3, 1, tmp_list_element_4);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[74]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_tuple_element_1 = mod_consts[79];
            tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_format_value_1;
                PyObject *tmp_format_spec_1;
                PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(var_estatos);
                tmp_format_value_1 = var_estatos;
                tmp_format_spec_1 = mod_consts[20];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 188;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_string_concat_values_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_args_element_value_2 = PyUnicode_Join(mod_consts[20], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 188;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 188;
            tmp_list_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_list_element_3, 2, tmp_list_element_4);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_list_element_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_list_element_6;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_list_element_7;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_string_concat_values_3;
            PyObject *tmp_tuple_element_3;
            PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_3);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[97]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 189;
            tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[107], 0), mod_consts[108]);
            Py_DECREF(tmp_called_value_7);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_list_element_3 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_list_element_3, 0, tmp_list_element_5);
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_3);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[74]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_tuple_element_2 = mod_consts[109];
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_format_value_2;
                PyObject *tmp_format_spec_2;
                PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_main_path);
                tmp_format_value_2 = var_main_path;
                tmp_format_spec_2 = mod_consts[20];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_string_concat_values_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_args_element_value_3 = PyUnicode_Join(mod_consts[20], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 190;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 190;
            tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_list_element_3 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_called_instance_2;
                PyList_SET_ITEM(tmp_list_element_3, 0, tmp_list_element_6);
                tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_called_instance_1 == NULL)) {
                    tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_called_instance_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_1 = "oooo";
                    goto list_build_exception_3;
                }
                frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 190;
                tmp_list_element_6 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_1,
                    mod_consts[97],
                    PyTuple_GET_ITEM(mod_consts[110], 0)
                );

                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_1 = "oooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_3, 1, tmp_list_element_6);
                tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_called_instance_2 == NULL)) {
                    tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_called_instance_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_1 = "oooo";
                    goto list_build_exception_3;
                }
                frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 190;
                tmp_list_element_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[111]);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_1 = "oooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_3, 2, tmp_list_element_6);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            PyList_SET_ITEM(tmp_args_element_value_1, 2, tmp_list_element_3);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[74]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_tuple_element_3 = mod_consts[112];
            tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_format_value_3;
                PyObject *tmp_format_spec_3;
                PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
                CHECK_OBJECT(var_main_path);
                tmp_format_value_3 = var_main_path;
                tmp_format_spec_3 = mod_consts[20];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_string_concat_values_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_args_element_value_4 = PyUnicode_Join(mod_consts[20], tmp_string_concat_values_3);
            Py_DECREF(tmp_string_concat_values_3);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 191;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 191;
            tmp_list_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_list_element_3 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_called_instance_4;
                PyList_SET_ITEM(tmp_list_element_3, 0, tmp_list_element_7);
                tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_called_instance_3 == NULL)) {
                    tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_called_instance_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "oooo";
                    goto list_build_exception_4;
                }
                frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 191;
                tmp_list_element_7 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_3,
                    mod_consts[97],
                    PyTuple_GET_ITEM(mod_consts[110], 0)
                );

                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "oooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_3, 1, tmp_list_element_7);
                tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_called_instance_4 == NULL)) {
                    tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_called_instance_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "oooo";
                    goto list_build_exception_4;
                }
                frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 191;
                tmp_list_element_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[111]);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "oooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_3, 2, tmp_list_element_7);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_args_element_value_1, 3, tmp_list_element_3);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame.f_lineno = 187;
        tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
        tmp_assign_source_4 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_4, 0, tmp_list_element_1);
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_4;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff35353eafdd347b0427d2ba20ba8a7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff35353eafdd347b0427d2ba20ba8a7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff35353eafdd347b0427d2ba20ba8a7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff35353eafdd347b0427d2ba20ba8a7a,
        type_description_1,
        var_estatos,
        var_pathe,
        var_main_path,
        var_layout
    );


    // Release cached frame if used for exception.
    if (frame_ff35353eafdd347b0427d2ba20ba8a7a == cache_frame_ff35353eafdd347b0427d2ba20ba8a7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff35353eafdd347b0427d2ba20ba8a7a);
        cache_frame_ff35353eafdd347b0427d2ba20ba8a7a = NULL;
    }

    assertFrameObject(frame_ff35353eafdd347b0427d2ba20ba8a7a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_layout);
    tmp_return_value = var_layout;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_estatos);
    Py_DECREF(var_estatos);
    var_estatos = NULL;
    CHECK_OBJECT(var_pathe);
    Py_DECREF(var_pathe);
    var_pathe = NULL;
    CHECK_OBJECT(var_main_path);
    Py_DECREF(var_main_path);
    var_main_path = NULL;
    CHECK_OBJECT(var_layout);
    Py_DECREF(var_layout);
    var_layout = NULL;
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

    Py_XDECREF(var_estatos);
    var_estatos = NULL;
    Py_XDECREF(var_pathe);
    var_pathe = NULL;
    Py_XDECREF(var_main_path);
    var_main_path = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__5_read_config_from_json(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_custom_json = python_pars[0];
    PyObject *var_file = NULL;
    PyObject *var_config = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_6311d8959048c770e9f026c44472d71a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6311d8959048c770e9f026c44472d71a = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6311d8959048c770e9f026c44472d71a)) {
        Py_XDECREF(cache_frame_6311d8959048c770e9f026c44472d71a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6311d8959048c770e9f026c44472d71a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6311d8959048c770e9f026c44472d71a = MAKE_FUNCTION_FRAME(codeobj_6311d8959048c770e9f026c44472d71a, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6311d8959048c770e9f026c44472d71a->m_type_description == NULL);
    frame_6311d8959048c770e9f026c44472d71a = cache_frame_6311d8959048c770e9f026c44472d71a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6311d8959048c770e9f026c44472d71a);
    assert(Py_REFCNT(frame_6311d8959048c770e9f026c44472d71a) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        CHECK_OBJECT(par_custom_json);
        tmp_open_filename_1 = par_custom_json;
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[113]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_6311d8959048c770e9f026c44472d71a->m_frame.f_lineno = 230;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[114]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_file == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_file = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_file);
        tmp_args_element_value_1 = var_file;
        frame_6311d8959048c770e9f026c44472d71a->m_frame.f_lineno = 231;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[116], tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        assert(var_config == NULL);
        var_config = tmp_assign_source_6;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_6311d8959048c770e9f026c44472d71a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_6311d8959048c770e9f026c44472d71a, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_2 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_6311d8959048c770e9f026c44472d71a->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 230;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6311d8959048c770e9f026c44472d71a->m_frame) frame_6311d8959048c770e9f026c44472d71a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 230;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6311d8959048c770e9f026c44472d71a->m_frame) frame_6311d8959048c770e9f026c44472d71a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
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

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        frame_6311d8959048c770e9f026c44472d71a->m_frame.f_lineno = 230;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[117]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 230;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_6311d8959048c770e9f026c44472d71a->m_frame.f_lineno = 230;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[117]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_4;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    if (var_config == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 232;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_config;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6311d8959048c770e9f026c44472d71a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6311d8959048c770e9f026c44472d71a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6311d8959048c770e9f026c44472d71a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6311d8959048c770e9f026c44472d71a,
        type_description_1,
        par_custom_json,
        var_file,
        var_config
    );


    // Release cached frame if used for exception.
    if (frame_6311d8959048c770e9f026c44472d71a == cache_frame_6311d8959048c770e9f026c44472d71a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6311d8959048c770e9f026c44472d71a);
        cache_frame_6311d8959048c770e9f026c44472d71a = NULL;
    }

    assertFrameObject(frame_6311d8959048c770e9f026c44472d71a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_file);
    Py_DECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_config);
    var_config = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_config);
    var_config = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_custom_json);
    Py_DECREF(par_custom_json);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_custom_json);
    Py_DECREF(par_custom_json);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__6_profiles_screen(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_path = NULL;
    struct Nuitka_CellObject *var_custom_json = Nuitka_Cell_Empty();
    PyObject *var_config = NULL;
    PyObject *var_layut = NULL;
    PyObject *var_layout = NULL;
    PyObject *var_window = NULL;
    PyObject *var_event = NULL;
    PyObject *var_values = NULL;
    PyObject *var_file = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_7689733633d28c77cfa186ceb9cd6d88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_7689733633d28c77cfa186ceb9cd6d88 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7689733633d28c77cfa186ceb9cd6d88)) {
        Py_XDECREF(cache_frame_7689733633d28c77cfa186ceb9cd6d88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7689733633d28c77cfa186ceb9cd6d88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7689733633d28c77cfa186ceb9cd6d88 = MAKE_FUNCTION_FRAME(codeobj_7689733633d28c77cfa186ceb9cd6d88, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7689733633d28c77cfa186ceb9cd6d88->m_type_description == NULL);
    frame_7689733633d28c77cfa186ceb9cd6d88 = cache_frame_7689733633d28c77cfa186ceb9cd6d88;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7689733633d28c77cfa186ceb9cd6d88);
    assert(Py_REFCNT(frame_7689733633d28c77cfa186ceb9cd6d88) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 235;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_path);
        tmp_expression_value_1 = var_path;
        tmp_subscript_value_1 = mod_consts[119];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 6);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_custom_json) == NULL);
        PyCell_SET(var_custom_json, tmp_assign_source_2);

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_exists_arg_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_custom_json));
        tmp_exists_arg_1 = Nuitka_Cell_GET(var_custom_json);
        tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tmp_exists_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 240;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_custom_json));
        tmp_args_element_value_1 = Nuitka_Cell_GET(var_custom_json);
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 243;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_config == NULL);
        var_config = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_custom_json;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_4 = MAKE_FUNCTION___main__$$$function__6_profiles_screen$$$function__1_layut(tmp_closure_1);

        assert(var_layut == NULL);
        var_layut = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 320;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        CHECK_OBJECT(var_layut);
        tmp_called_value_4 = var_layut;
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 321;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[37];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_layout);
        tmp_tuple_element_1 = var_layout;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[124]);
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 324;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_window);
        tmp_expression_value_4 = var_window;
        tmp_subscript_value_2 = mod_consts[125];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_5 = var_config;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[126]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 326;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 326;
        tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[127]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 326;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 326;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_window);
        tmp_expression_value_7 = var_window;
        tmp_subscript_value_3 = mod_consts[129];
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_8 = var_config;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[126]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 327;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 327;
        tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[130]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 327;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 327;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_window);
        tmp_expression_value_10 = var_window;
        tmp_subscript_value_4 = mod_consts[131];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[2]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_11 = var_config;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[126]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 328;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 328;
        tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[132]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 328;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 328;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_window);
        tmp_expression_value_13 = var_window;
        tmp_subscript_value_5 = mod_consts[133];
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_5);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[2]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_14 = var_config;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[126]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 329;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 329;
        tmp_kw_call_value_0_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[134]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 329;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 329;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

            tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_window);
        tmp_expression_value_16 = var_window;
        tmp_subscript_value_6 = mod_consts[135];
        tmp_expression_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_6);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[2]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_17 = var_config;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[126]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 330;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 330;
        tmp_kw_call_value_0_5 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[136]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 330;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 330;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_window);
        tmp_expression_value_19 = var_window;
        tmp_subscript_value_7 = mod_consts[137];
        tmp_expression_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_7);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[2]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_20 = var_config;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[126]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 331;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 331;
        tmp_kw_call_value_0_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[138]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 331;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 331;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

            tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(var_window);
        tmp_expression_value_22 = var_window;
        tmp_subscript_value_8 = mod_consts[139];
        tmp_expression_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_8);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[2]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_23 = var_config;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[126]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 332;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 332;
        tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[140]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 332;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 332;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

            tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(var_window);
        tmp_expression_value_25 = var_window;
        tmp_subscript_value_9 = mod_consts[141];
        tmp_expression_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_9);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[2]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_26 = var_config;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[126]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 333;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 333;
        tmp_kw_call_value_0_8 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[142]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 333;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 333;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};

            tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_value_0_8);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(var_window);
        tmp_expression_value_28 = var_window;
        tmp_subscript_value_10 = mod_consts[143];
        tmp_expression_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_10);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[2]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_29 = var_config;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[126]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 334;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 334;
        tmp_kw_call_value_0_9 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[144]);

        Py_DECREF(tmp_called_value_23);
        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 334;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 334;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};

            tmp_call_result_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_kw_call_value_0_9);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(var_window);
        tmp_expression_value_31 = var_window;
        tmp_subscript_value_11 = mod_consts[145];
        tmp_expression_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_11);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[2]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_32 = var_config;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[126]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 335;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 335;
        tmp_kw_call_value_0_10 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_25, mod_consts[146]);

        Py_DECREF(tmp_called_value_25);
        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 335;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 335;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};

            tmp_call_result_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_value_0_10);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_call_result_13;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(var_window);
        tmp_expression_value_34 = var_window;
        tmp_subscript_value_12 = mod_consts[147];
        tmp_expression_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_12);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[2]);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_35 = var_config;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[126]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 336;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 336;
        tmp_kw_call_value_0_11 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_27, mod_consts[148]);

        Py_DECREF(tmp_called_value_27);
        if (tmp_kw_call_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 336;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 336;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_11};

            tmp_call_result_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_0_11);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_call_result_14;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(var_window);
        tmp_expression_value_37 = var_window;
        tmp_subscript_value_13 = mod_consts[149];
        tmp_expression_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_13);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[2]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_38 = var_config;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[126]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 337;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 337;
        tmp_kw_call_value_0_12 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[150]);

        Py_DECREF(tmp_called_value_29);
        if (tmp_kw_call_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 337;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 337;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_12};

            tmp_call_result_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_value_0_12);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_call_result_15;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(var_window);
        tmp_expression_value_40 = var_window;
        tmp_subscript_value_14 = mod_consts[151];
        tmp_expression_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_14);
        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[2]);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_41 = var_config;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[126]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 338;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 338;
        tmp_kw_call_value_0_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[152]);

        Py_DECREF(tmp_called_value_31);
        if (tmp_kw_call_value_0_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 338;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 338;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};

            tmp_call_result_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_30, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_kw_call_value_0_13);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(var_window);
        tmp_expression_value_43 = var_window;
        tmp_subscript_value_15 = mod_consts[153];
        tmp_expression_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_15);
        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[2]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_44 = var_config;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[126]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 339;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 339;
        tmp_kw_call_value_0_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[154]);

        Py_DECREF(tmp_called_value_33);
        if (tmp_kw_call_value_0_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 339;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 339;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_14};

            tmp_call_result_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_32, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_kw_call_value_0_14);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_47;
        CHECK_OBJECT(var_window);
        tmp_expression_value_46 = var_window;
        tmp_subscript_value_16 = mod_consts[155];
        tmp_expression_value_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_16);
        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[2]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_47 = var_config;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[126]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 340;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 340;
        tmp_kw_call_value_0_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_35, mod_consts[156]);

        Py_DECREF(tmp_called_value_35);
        if (tmp_kw_call_value_0_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 340;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 340;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_15};

            tmp_call_result_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_34, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_kw_call_value_0_15);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(var_window);
        tmp_expression_value_49 = var_window;
        tmp_subscript_value_17 = mod_consts[157];
        tmp_expression_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_17);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[2]);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_50 = var_config;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[126]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 341;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 341;
        tmp_kw_call_value_0_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_37, mod_consts[158]);

        Py_DECREF(tmp_called_value_37);
        if (tmp_kw_call_value_0_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 341;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 341;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_16};

            tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_36, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_kw_call_value_0_16);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_call_result_19;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(var_window);
        tmp_expression_value_52 = var_window;
        tmp_subscript_value_18 = mod_consts[159];
        tmp_expression_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_18);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[2]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_53 = var_config;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[126]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 342;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 342;
        tmp_kw_call_value_0_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_39, mod_consts[160]);

        Py_DECREF(tmp_called_value_39);
        if (tmp_kw_call_value_0_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 342;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 342;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_17};

            tmp_call_result_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_38, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_kw_call_value_0_17);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(var_window);
        tmp_expression_value_55 = var_window;
        tmp_subscript_value_19 = mod_consts[161];
        tmp_expression_value_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_19);
        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[2]);
        Py_DECREF(tmp_expression_value_54);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_56 = var_config;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[126]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 343;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 343;
        tmp_kw_call_value_0_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_41, mod_consts[162]);

        Py_DECREF(tmp_called_value_41);
        if (tmp_kw_call_value_0_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 343;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 343;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_18};

            tmp_call_result_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_40, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_kw_call_value_0_18);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_call_result_21;
        PyObject *tmp_kw_call_value_0_19;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(var_window);
        tmp_expression_value_58 = var_window;
        tmp_subscript_value_20 = mod_consts[163];
        tmp_expression_value_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_20);
        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[2]);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_59 = var_config;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[126]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 344;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 344;
        tmp_kw_call_value_0_19 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_43, mod_consts[164]);

        Py_DECREF(tmp_called_value_43);
        if (tmp_kw_call_value_0_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 344;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 344;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_19};

            tmp_call_result_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_42, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_kw_call_value_0_19);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_call_result_22;
        PyObject *tmp_kw_call_value_0_20;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(var_window);
        tmp_expression_value_61 = var_window;
        tmp_subscript_value_21 = mod_consts[165];
        tmp_expression_value_60 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_21);
        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[2]);
        Py_DECREF(tmp_expression_value_60);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_62 = var_config;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[126]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 345;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 345;
        tmp_kw_call_value_0_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_45, mod_consts[166]);

        Py_DECREF(tmp_called_value_45);
        if (tmp_kw_call_value_0_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 345;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 345;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_20};

            tmp_call_result_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_44, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_kw_call_value_0_20);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_call_result_23;
        PyObject *tmp_kw_call_value_0_21;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_65;
        CHECK_OBJECT(var_window);
        tmp_expression_value_64 = var_window;
        tmp_subscript_value_22 = mod_consts[167];
        tmp_expression_value_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_22);
        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[2]);
        Py_DECREF(tmp_expression_value_63);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_65 = var_config;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[126]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 346;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 346;
        tmp_kw_call_value_0_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_47, mod_consts[168]);

        Py_DECREF(tmp_called_value_47);
        if (tmp_kw_call_value_0_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 346;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 346;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_21};

            tmp_call_result_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_46, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_kw_call_value_0_21);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_call_result_24;
        PyObject *tmp_kw_call_value_0_22;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(var_window);
        tmp_expression_value_67 = var_window;
        tmp_subscript_value_23 = mod_consts[169];
        tmp_expression_value_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_23);
        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[2]);
        Py_DECREF(tmp_expression_value_66);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_68 = var_config;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[126]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 347;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 347;
        tmp_kw_call_value_0_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_49, mod_consts[170]);

        Py_DECREF(tmp_called_value_49);
        if (tmp_kw_call_value_0_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 347;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 347;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_22};

            tmp_call_result_24 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_48, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_kw_call_value_0_22);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_call_result_25;
        PyObject *tmp_kw_call_value_0_23;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(var_window);
        tmp_expression_value_70 = var_window;
        tmp_subscript_value_24 = mod_consts[171];
        tmp_expression_value_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_24);
        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[2]);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_71 = var_config;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[126]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 348;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 348;
        tmp_kw_call_value_0_23 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_51, mod_consts[172]);

        Py_DECREF(tmp_called_value_51);
        if (tmp_kw_call_value_0_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 348;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 348;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_23};

            tmp_call_result_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_50, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_kw_call_value_0_23);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_call_result_26;
        PyObject *tmp_kw_call_value_0_24;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(var_window);
        tmp_expression_value_73 = var_window;
        tmp_subscript_value_25 = mod_consts[173];
        tmp_expression_value_72 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_25);
        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[2]);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_74 = var_config;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[126]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 349;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 349;
        tmp_kw_call_value_0_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_53, mod_consts[174]);

        Py_DECREF(tmp_called_value_53);
        if (tmp_kw_call_value_0_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 349;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 349;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_24};

            tmp_call_result_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_52, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_kw_call_value_0_24);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_call_result_27;
        PyObject *tmp_kw_call_value_0_25;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_77;
        CHECK_OBJECT(var_window);
        tmp_expression_value_76 = var_window;
        tmp_subscript_value_26 = mod_consts[175];
        tmp_expression_value_75 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_26);
        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[2]);
        Py_DECREF(tmp_expression_value_75);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_77 = var_config;
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[126]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 350;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 350;
        tmp_kw_call_value_0_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_55, mod_consts[176]);

        Py_DECREF(tmp_called_value_55);
        if (tmp_kw_call_value_0_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 350;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 350;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_25};

            tmp_call_result_27 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_54, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_kw_call_value_0_25);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_call_result_28;
        PyObject *tmp_kw_call_value_0_26;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(var_window);
        tmp_expression_value_79 = var_window;
        tmp_subscript_value_27 = mod_consts[177];
        tmp_expression_value_78 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_27);
        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[2]);
        Py_DECREF(tmp_expression_value_78);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_80 = var_config;
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[126]);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 351;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 351;
        tmp_kw_call_value_0_26 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_57, mod_consts[178]);

        Py_DECREF(tmp_called_value_57);
        if (tmp_kw_call_value_0_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 351;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 351;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_26};

            tmp_call_result_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_56, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_kw_call_value_0_26);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_call_result_29;
        PyObject *tmp_kw_call_value_0_27;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_83;
        CHECK_OBJECT(var_window);
        tmp_expression_value_82 = var_window;
        tmp_subscript_value_28 = mod_consts[179];
        tmp_expression_value_81 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_28);
        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[2]);
        Py_DECREF(tmp_expression_value_81);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_83 = var_config;
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[126]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 352;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 352;
        tmp_kw_call_value_0_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_59, mod_consts[180]);

        Py_DECREF(tmp_called_value_59);
        if (tmp_kw_call_value_0_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 352;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 352;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_27};

            tmp_call_result_29 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_58, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_kw_call_value_0_27);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_call_result_30;
        PyObject *tmp_kw_call_value_0_28;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(var_window);
        tmp_expression_value_85 = var_window;
        tmp_subscript_value_29 = mod_consts[181];
        tmp_expression_value_84 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_29);
        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[2]);
        Py_DECREF(tmp_expression_value_84);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_86 = var_config;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[126]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 353;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 353;
        tmp_kw_call_value_0_28 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_61, mod_consts[182]);

        Py_DECREF(tmp_called_value_61);
        if (tmp_kw_call_value_0_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 353;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 353;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_28};

            tmp_call_result_30 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_60, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_kw_call_value_0_28);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_call_result_31;
        PyObject *tmp_kw_call_value_0_29;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_89;
        CHECK_OBJECT(var_window);
        tmp_expression_value_88 = var_window;
        tmp_subscript_value_30 = mod_consts[183];
        tmp_expression_value_87 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_30);
        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[2]);
        Py_DECREF(tmp_expression_value_87);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_89 = var_config;
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[126]);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 354;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 354;
        tmp_kw_call_value_0_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_63, mod_consts[184]);

        Py_DECREF(tmp_called_value_63);
        if (tmp_kw_call_value_0_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 354;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 354;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_29};

            tmp_call_result_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_62, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_kw_call_value_0_29);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_call_result_32;
        PyObject *tmp_kw_call_value_0_30;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(var_window);
        tmp_expression_value_91 = var_window;
        tmp_subscript_value_31 = mod_consts[185];
        tmp_expression_value_90 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_31);
        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[2]);
        Py_DECREF(tmp_expression_value_90);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_92 = var_config;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[126]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 355;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 355;
        tmp_kw_call_value_0_30 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_65, mod_consts[186]);

        Py_DECREF(tmp_called_value_65);
        if (tmp_kw_call_value_0_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 355;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 355;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_30};

            tmp_call_result_32 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_64, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_kw_call_value_0_30);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_call_result_33;
        PyObject *tmp_kw_call_value_0_31;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_95;
        CHECK_OBJECT(var_window);
        tmp_expression_value_94 = var_window;
        tmp_subscript_value_32 = mod_consts[187];
        tmp_expression_value_93 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_32);
        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[2]);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_95 = var_config;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[126]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 356;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 356;
        tmp_kw_call_value_0_31 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_67, mod_consts[188]);

        Py_DECREF(tmp_called_value_67);
        if (tmp_kw_call_value_0_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 356;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 356;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_31};

            tmp_call_result_33 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_66, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_kw_call_value_0_31);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_call_result_34;
        PyObject *tmp_kw_call_value_0_32;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(var_window);
        tmp_expression_value_97 = var_window;
        tmp_subscript_value_33 = mod_consts[189];
        tmp_expression_value_96 = LOOKUP_SUBSCRIPT(tmp_expression_value_97, tmp_subscript_value_33);
        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[2]);
        Py_DECREF(tmp_expression_value_96);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_98 = var_config;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[126]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 357;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 357;
        tmp_kw_call_value_0_32 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_69, mod_consts[190]);

        Py_DECREF(tmp_called_value_69);
        if (tmp_kw_call_value_0_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 357;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 357;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_32};

            tmp_call_result_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_68, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_kw_call_value_0_32);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_call_result_35;
        PyObject *tmp_kw_call_value_0_33;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_101;
        CHECK_OBJECT(var_window);
        tmp_expression_value_100 = var_window;
        tmp_subscript_value_34 = mod_consts[191];
        tmp_expression_value_99 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_34);
        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[2]);
        Py_DECREF(tmp_expression_value_99);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_101 = var_config;
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[126]);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 358;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 358;
        tmp_kw_call_value_0_33 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_71, mod_consts[192]);

        Py_DECREF(tmp_called_value_71);
        if (tmp_kw_call_value_0_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 358;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 358;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_33};

            tmp_call_result_35 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_70, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_kw_call_value_0_33);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_call_result_36;
        PyObject *tmp_kw_call_value_0_34;
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(var_window);
        tmp_expression_value_103 = var_window;
        tmp_subscript_value_35 = mod_consts[193];
        tmp_expression_value_102 = LOOKUP_SUBSCRIPT(tmp_expression_value_103, tmp_subscript_value_35);
        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[2]);
        Py_DECREF(tmp_expression_value_102);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_104 = var_config;
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[126]);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 359;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 359;
        tmp_kw_call_value_0_34 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_73, mod_consts[194]);

        Py_DECREF(tmp_called_value_73);
        if (tmp_kw_call_value_0_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 359;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 359;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_34};

            tmp_call_result_36 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_72, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_kw_call_value_0_34);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_call_result_37;
        PyObject *tmp_kw_call_value_0_35;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_107;
        CHECK_OBJECT(var_window);
        tmp_expression_value_106 = var_window;
        tmp_subscript_value_36 = mod_consts[195];
        tmp_expression_value_105 = LOOKUP_SUBSCRIPT(tmp_expression_value_106, tmp_subscript_value_36);
        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[2]);
        Py_DECREF(tmp_expression_value_105);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_107 = var_config;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[126]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 360;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 360;
        tmp_kw_call_value_0_35 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_75, mod_consts[196]);

        Py_DECREF(tmp_called_value_75);
        if (tmp_kw_call_value_0_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 360;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 360;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_35};

            tmp_call_result_37 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_74, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_kw_call_value_0_35);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_37;
        PyObject *tmp_call_result_38;
        PyObject *tmp_kw_call_value_0_36;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_110;
        CHECK_OBJECT(var_window);
        tmp_expression_value_109 = var_window;
        tmp_subscript_value_37 = mod_consts[197];
        tmp_expression_value_108 = LOOKUP_SUBSCRIPT(tmp_expression_value_109, tmp_subscript_value_37);
        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[2]);
        Py_DECREF(tmp_expression_value_108);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_110 = var_config;
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[126]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 361;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 361;
        tmp_kw_call_value_0_36 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_77, mod_consts[198]);

        Py_DECREF(tmp_called_value_77);
        if (tmp_kw_call_value_0_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 361;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 361;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_36};

            tmp_call_result_38 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_76, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_kw_call_value_0_36);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_call_result_39;
        PyObject *tmp_kw_call_value_0_37;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_113;
        CHECK_OBJECT(var_window);
        tmp_expression_value_112 = var_window;
        tmp_subscript_value_38 = mod_consts[199];
        tmp_expression_value_111 = LOOKUP_SUBSCRIPT(tmp_expression_value_112, tmp_subscript_value_38);
        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[2]);
        Py_DECREF(tmp_expression_value_111);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_113 = var_config;
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[126]);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 362;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 362;
        tmp_kw_call_value_0_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_79, mod_consts[200]);

        Py_DECREF(tmp_called_value_79);
        if (tmp_kw_call_value_0_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 362;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 362;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_37};

            tmp_call_result_39 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_78, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_kw_call_value_0_37);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_39;
        PyObject *tmp_call_result_40;
        PyObject *tmp_kw_call_value_0_38;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_116;
        CHECK_OBJECT(var_window);
        tmp_expression_value_115 = var_window;
        tmp_subscript_value_39 = mod_consts[201];
        tmp_expression_value_114 = LOOKUP_SUBSCRIPT(tmp_expression_value_115, tmp_subscript_value_39);
        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[2]);
        Py_DECREF(tmp_expression_value_114);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_116 = var_config;
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[126]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 363;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 363;
        tmp_kw_call_value_0_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_81, mod_consts[202]);

        Py_DECREF(tmp_called_value_81);
        if (tmp_kw_call_value_0_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 363;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 363;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_38};

            tmp_call_result_40 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_80, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_kw_call_value_0_38);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_call_result_41;
        PyObject *tmp_kw_call_value_0_39;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_119;
        CHECK_OBJECT(var_window);
        tmp_expression_value_118 = var_window;
        tmp_subscript_value_40 = mod_consts[203];
        tmp_expression_value_117 = LOOKUP_SUBSCRIPT(tmp_expression_value_118, tmp_subscript_value_40);
        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[2]);
        Py_DECREF(tmp_expression_value_117);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_119 = var_config;
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[126]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 364;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 364;
        tmp_kw_call_value_0_39 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_83, mod_consts[204]);

        Py_DECREF(tmp_called_value_83);
        if (tmp_kw_call_value_0_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 364;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 364;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_39};

            tmp_call_result_41 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_82, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_kw_call_value_0_39);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_call_result_42;
        PyObject *tmp_kw_call_value_0_40;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_122;
        CHECK_OBJECT(var_window);
        tmp_expression_value_121 = var_window;
        tmp_subscript_value_41 = mod_consts[205];
        tmp_expression_value_120 = LOOKUP_SUBSCRIPT(tmp_expression_value_121, tmp_subscript_value_41);
        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[2]);
        Py_DECREF(tmp_expression_value_120);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_122 = var_config;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[126]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 365;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 365;
        tmp_kw_call_value_0_40 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_85, mod_consts[206]);

        Py_DECREF(tmp_called_value_85);
        if (tmp_kw_call_value_0_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 365;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 365;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_40};

            tmp_call_result_42 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_84, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_kw_call_value_0_40);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_call_result_43;
        PyObject *tmp_kw_call_value_0_41;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_125;
        CHECK_OBJECT(var_window);
        tmp_expression_value_124 = var_window;
        tmp_subscript_value_42 = mod_consts[207];
        tmp_expression_value_123 = LOOKUP_SUBSCRIPT(tmp_expression_value_124, tmp_subscript_value_42);
        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[2]);
        Py_DECREF(tmp_expression_value_123);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_125 = var_config;
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[126]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 366;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 366;
        tmp_kw_call_value_0_41 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_87, mod_consts[208]);

        Py_DECREF(tmp_called_value_87);
        if (tmp_kw_call_value_0_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 366;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 366;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_41};

            tmp_call_result_43 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_86, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_kw_call_value_0_41);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_43;
        PyObject *tmp_call_result_44;
        PyObject *tmp_kw_call_value_0_42;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_128;
        CHECK_OBJECT(var_window);
        tmp_expression_value_127 = var_window;
        tmp_subscript_value_43 = mod_consts[209];
        tmp_expression_value_126 = LOOKUP_SUBSCRIPT(tmp_expression_value_127, tmp_subscript_value_43);
        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[2]);
        Py_DECREF(tmp_expression_value_126);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_128 = var_config;
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[126]);
        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 367;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 367;
        tmp_kw_call_value_0_42 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_89, mod_consts[210]);

        Py_DECREF(tmp_called_value_89);
        if (tmp_kw_call_value_0_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 367;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 367;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_42};

            tmp_call_result_44 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_88, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_kw_call_value_0_42);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_subscript_value_44;
        PyObject *tmp_call_result_45;
        PyObject *tmp_kw_call_value_0_43;
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_131;
        CHECK_OBJECT(var_window);
        tmp_expression_value_130 = var_window;
        tmp_subscript_value_44 = mod_consts[211];
        tmp_expression_value_129 = LOOKUP_SUBSCRIPT(tmp_expression_value_130, tmp_subscript_value_44);
        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[2]);
        Py_DECREF(tmp_expression_value_129);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_131 = var_config;
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[126]);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 368;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 368;
        tmp_kw_call_value_0_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_91, mod_consts[212]);

        Py_DECREF(tmp_called_value_91);
        if (tmp_kw_call_value_0_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 368;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 368;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_43};

            tmp_call_result_45 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_90, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_kw_call_value_0_43);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_45;
        PyObject *tmp_call_result_46;
        PyObject *tmp_kw_call_value_0_44;
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_134;
        CHECK_OBJECT(var_window);
        tmp_expression_value_133 = var_window;
        tmp_subscript_value_45 = mod_consts[213];
        tmp_expression_value_132 = LOOKUP_SUBSCRIPT(tmp_expression_value_133, tmp_subscript_value_45);
        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[2]);
        Py_DECREF(tmp_expression_value_132);
        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_134 = var_config;
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[126]);
        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 369;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 369;
        tmp_kw_call_value_0_44 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_93, mod_consts[214]);

        Py_DECREF(tmp_called_value_93);
        if (tmp_kw_call_value_0_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 369;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 369;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_44};

            tmp_call_result_46 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_92, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_kw_call_value_0_44);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_call_result_47;
        PyObject *tmp_kw_call_value_0_45;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_137;
        CHECK_OBJECT(var_window);
        tmp_expression_value_136 = var_window;
        tmp_subscript_value_46 = mod_consts[215];
        tmp_expression_value_135 = LOOKUP_SUBSCRIPT(tmp_expression_value_136, tmp_subscript_value_46);
        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[2]);
        Py_DECREF(tmp_expression_value_135);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_137 = var_config;
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[126]);
        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 370;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 370;
        tmp_kw_call_value_0_45 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_95, mod_consts[216]);

        Py_DECREF(tmp_called_value_95);
        if (tmp_kw_call_value_0_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 370;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 370;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_45};

            tmp_call_result_47 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_94, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_kw_call_value_0_45);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_47;
        PyObject *tmp_call_result_48;
        PyObject *tmp_kw_call_value_0_46;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_140;
        CHECK_OBJECT(var_window);
        tmp_expression_value_139 = var_window;
        tmp_subscript_value_47 = mod_consts[217];
        tmp_expression_value_138 = LOOKUP_SUBSCRIPT(tmp_expression_value_139, tmp_subscript_value_47);
        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[2]);
        Py_DECREF(tmp_expression_value_138);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_140 = var_config;
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[126]);
        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 371;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 371;
        tmp_kw_call_value_0_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_97, mod_consts[218]);

        Py_DECREF(tmp_called_value_97);
        if (tmp_kw_call_value_0_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 371;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 371;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_46};

            tmp_call_result_48 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_96, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_kw_call_value_0_46);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_subscript_value_48;
        PyObject *tmp_call_result_49;
        PyObject *tmp_kw_call_value_0_47;
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_143;
        CHECK_OBJECT(var_window);
        tmp_expression_value_142 = var_window;
        tmp_subscript_value_48 = mod_consts[219];
        tmp_expression_value_141 = LOOKUP_SUBSCRIPT(tmp_expression_value_142, tmp_subscript_value_48);
        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[2]);
        Py_DECREF(tmp_expression_value_141);
        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_143 = var_config;
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[126]);
        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 372;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 372;
        tmp_kw_call_value_0_47 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_99, mod_consts[220]);

        Py_DECREF(tmp_called_value_99);
        if (tmp_kw_call_value_0_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 372;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 372;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_47};

            tmp_call_result_49 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_98, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_kw_call_value_0_47);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_49;
        PyObject *tmp_call_result_50;
        PyObject *tmp_kw_call_value_0_48;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_146;
        CHECK_OBJECT(var_window);
        tmp_expression_value_145 = var_window;
        tmp_subscript_value_49 = mod_consts[221];
        tmp_expression_value_144 = LOOKUP_SUBSCRIPT(tmp_expression_value_145, tmp_subscript_value_49);
        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[2]);
        Py_DECREF(tmp_expression_value_144);
        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_146 = var_config;
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[126]);
        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 373;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 373;
        tmp_kw_call_value_0_48 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_101, mod_consts[222]);

        Py_DECREF(tmp_called_value_101);
        if (tmp_kw_call_value_0_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 373;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 373;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_48};

            tmp_call_result_50 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_100, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_kw_call_value_0_48);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_call_result_51;
        PyObject *tmp_kw_call_value_0_49;
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_149;
        CHECK_OBJECT(var_window);
        tmp_expression_value_148 = var_window;
        tmp_subscript_value_50 = mod_consts[223];
        tmp_expression_value_147 = LOOKUP_SUBSCRIPT(tmp_expression_value_148, tmp_subscript_value_50);
        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[2]);
        Py_DECREF(tmp_expression_value_147);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_149 = var_config;
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[126]);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 374;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 374;
        tmp_kw_call_value_0_49 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_103, mod_consts[224]);

        Py_DECREF(tmp_called_value_103);
        if (tmp_kw_call_value_0_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 374;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 374;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_49};

            tmp_call_result_51 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_102, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_kw_call_value_0_49);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_subscript_value_51;
        PyObject *tmp_call_result_52;
        PyObject *tmp_kw_call_value_0_50;
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_152;
        CHECK_OBJECT(var_window);
        tmp_expression_value_151 = var_window;
        tmp_subscript_value_51 = mod_consts[225];
        tmp_expression_value_150 = LOOKUP_SUBSCRIPT(tmp_expression_value_151, tmp_subscript_value_51);
        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[2]);
        Py_DECREF(tmp_expression_value_150);
        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_152 = var_config;
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[126]);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 375;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 375;
        tmp_kw_call_value_0_50 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_105, mod_consts[226]);

        Py_DECREF(tmp_called_value_105);
        if (tmp_kw_call_value_0_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 375;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 375;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_50};

            tmp_call_result_52 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_104, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_kw_call_value_0_50);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_subscript_value_52;
        PyObject *tmp_call_result_53;
        PyObject *tmp_kw_call_value_0_51;
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_155;
        CHECK_OBJECT(var_window);
        tmp_expression_value_154 = var_window;
        tmp_subscript_value_52 = mod_consts[227];
        tmp_expression_value_153 = LOOKUP_SUBSCRIPT(tmp_expression_value_154, tmp_subscript_value_52);
        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[2]);
        Py_DECREF(tmp_expression_value_153);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_155 = var_config;
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[126]);
        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 376;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 376;
        tmp_kw_call_value_0_51 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_107, mod_consts[228]);

        Py_DECREF(tmp_called_value_107);
        if (tmp_kw_call_value_0_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 376;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 376;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_51};

            tmp_call_result_53 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_106, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_kw_call_value_0_51);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_subscript_value_53;
        PyObject *tmp_call_result_54;
        PyObject *tmp_kw_call_value_0_52;
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_158;
        CHECK_OBJECT(var_window);
        tmp_expression_value_157 = var_window;
        tmp_subscript_value_53 = mod_consts[229];
        tmp_expression_value_156 = LOOKUP_SUBSCRIPT(tmp_expression_value_157, tmp_subscript_value_53);
        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[2]);
        Py_DECREF(tmp_expression_value_156);
        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_158 = var_config;
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[126]);
        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 377;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 377;
        tmp_kw_call_value_0_52 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_109, mod_consts[230]);

        Py_DECREF(tmp_called_value_109);
        if (tmp_kw_call_value_0_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 377;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 377;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_52};

            tmp_call_result_54 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_108, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_kw_call_value_0_52);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_subscript_value_54;
        PyObject *tmp_call_result_55;
        PyObject *tmp_kw_call_value_0_53;
        PyObject *tmp_called_value_111;
        PyObject *tmp_expression_value_161;
        CHECK_OBJECT(var_window);
        tmp_expression_value_160 = var_window;
        tmp_subscript_value_54 = mod_consts[231];
        tmp_expression_value_159 = LOOKUP_SUBSCRIPT(tmp_expression_value_160, tmp_subscript_value_54);
        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[2]);
        Py_DECREF(tmp_expression_value_159);
        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_161 = var_config;
        tmp_called_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[126]);
        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 378;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 378;
        tmp_kw_call_value_0_53 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_111, mod_consts[232]);

        Py_DECREF(tmp_called_value_111);
        if (tmp_kw_call_value_0_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 378;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 378;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_53};

            tmp_call_result_55 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_110, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_kw_call_value_0_53);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_subscript_value_55;
        PyObject *tmp_call_result_56;
        PyObject *tmp_kw_call_value_0_54;
        PyObject *tmp_called_value_113;
        PyObject *tmp_expression_value_164;
        CHECK_OBJECT(var_window);
        tmp_expression_value_163 = var_window;
        tmp_subscript_value_55 = mod_consts[233];
        tmp_expression_value_162 = LOOKUP_SUBSCRIPT(tmp_expression_value_163, tmp_subscript_value_55);
        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[2]);
        Py_DECREF(tmp_expression_value_162);
        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_164 = var_config;
        tmp_called_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[126]);
        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 379;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 379;
        tmp_kw_call_value_0_54 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_113, mod_consts[234]);

        Py_DECREF(tmp_called_value_113);
        if (tmp_kw_call_value_0_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 379;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 379;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_54};

            tmp_call_result_56 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_112, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_112);
        Py_DECREF(tmp_kw_call_value_0_54);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "ocooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_window;
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 383;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[40]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ocooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ocooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooooo";
            exception_lineno = 383;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooooo";
            exception_lineno = 383;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ocooooooo";
                    exception_lineno = 383;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[41];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocooooooo";
            exception_lineno = 383;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_10;
            Py_INCREF(var_event);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_values;
            var_values = tmp_assign_source_11;
            Py_INCREF(var_values);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_1 = var_event;
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[42]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_2 = var_event;
        tmp_cmp_expr_right_2 = mod_consts[43];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_event);
        tmp_cmp_expr_left_3 = var_event;
        tmp_cmp_expr_right_3 = mod_consts[235];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_subscript_value_56;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_values);
        tmp_expression_value_166 = var_values;
        tmp_subscript_value_56 = mod_consts[125];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_166, tmp_subscript_value_56);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_config;
        tmp_ass_subscript_1 = mod_consts[236];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_subscript_value_57;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_values);
        tmp_expression_value_167 = var_values;
        tmp_subscript_value_57 = mod_consts[129];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_167, tmp_subscript_value_57);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_config;
        tmp_ass_subscript_2 = mod_consts[237];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_subscript_value_58;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_values);
        tmp_expression_value_168 = var_values;
        tmp_subscript_value_58 = mod_consts[131];
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_168, tmp_subscript_value_58);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 392;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_config;
        tmp_ass_subscript_3 = mod_consts[238];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_subscript_value_59;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_values);
        tmp_expression_value_169 = var_values;
        tmp_subscript_value_59 = mod_consts[133];
        tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_169, tmp_subscript_value_59);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = var_config;
        tmp_ass_subscript_4 = mod_consts[239];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_subscript_value_60;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT(var_values);
        tmp_expression_value_170 = var_values;
        tmp_subscript_value_60 = mod_consts[135];
        tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_170, tmp_subscript_value_60);
        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = var_config;
        tmp_ass_subscript_5 = mod_consts[240];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_subscript_value_61;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT(var_values);
        tmp_expression_value_171 = var_values;
        tmp_subscript_value_61 = mod_consts[137];
        tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_171, tmp_subscript_value_61);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = var_config;
        tmp_ass_subscript_6 = mod_consts[241];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_subscript_value_62;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT(var_values);
        tmp_expression_value_172 = var_values;
        tmp_subscript_value_62 = mod_consts[139];
        tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_172, tmp_subscript_value_62);
        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_7 = var_config;
        tmp_ass_subscript_7 = mod_consts[242];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_subscript_value_63;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        CHECK_OBJECT(var_values);
        tmp_expression_value_173 = var_values;
        tmp_subscript_value_63 = mod_consts[141];
        tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_173, tmp_subscript_value_63);
        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_8 = var_config;
        tmp_ass_subscript_8 = mod_consts[243];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_subscript_value_64;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        CHECK_OBJECT(var_values);
        tmp_expression_value_174 = var_values;
        tmp_subscript_value_64 = mod_consts[143];
        tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_174, tmp_subscript_value_64);
        if (tmp_ass_subvalue_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_9 = var_config;
        tmp_ass_subscript_9 = mod_consts[244];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_subscript_value_65;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        CHECK_OBJECT(var_values);
        tmp_expression_value_175 = var_values;
        tmp_subscript_value_65 = mod_consts[145];
        tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_175, tmp_subscript_value_65);
        if (tmp_ass_subvalue_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_10 = var_config;
        tmp_ass_subscript_10 = mod_consts[245];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        Py_DECREF(tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_subscript_value_66;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        CHECK_OBJECT(var_values);
        tmp_expression_value_176 = var_values;
        tmp_subscript_value_66 = mod_consts[147];
        tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_176, tmp_subscript_value_66);
        if (tmp_ass_subvalue_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_11 = var_config;
        tmp_ass_subscript_11 = mod_consts[246];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        Py_DECREF(tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_subscript_value_67;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        CHECK_OBJECT(var_values);
        tmp_expression_value_177 = var_values;
        tmp_subscript_value_67 = mod_consts[149];
        tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_177, tmp_subscript_value_67);
        if (tmp_ass_subvalue_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_12 = var_config;
        tmp_ass_subscript_12 = mod_consts[247];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        Py_DECREF(tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_subscript_value_68;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        CHECK_OBJECT(var_values);
        tmp_expression_value_178 = var_values;
        tmp_subscript_value_68 = mod_consts[151];
        tmp_ass_subvalue_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_178, tmp_subscript_value_68);
        if (tmp_ass_subvalue_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_13 = var_config;
        tmp_ass_subscript_13 = mod_consts[248];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        Py_DECREF(tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_subscript_value_69;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        CHECK_OBJECT(var_values);
        tmp_expression_value_179 = var_values;
        tmp_subscript_value_69 = mod_consts[153];
        tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_179, tmp_subscript_value_69);
        if (tmp_ass_subvalue_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_14 = var_config;
        tmp_ass_subscript_14 = mod_consts[249];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        Py_DECREF(tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_subscript_value_70;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        CHECK_OBJECT(var_values);
        tmp_expression_value_180 = var_values;
        tmp_subscript_value_70 = mod_consts[155];
        tmp_ass_subvalue_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_180, tmp_subscript_value_70);
        if (tmp_ass_subvalue_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_15 = var_config;
        tmp_ass_subscript_15 = mod_consts[250];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        Py_DECREF(tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_subscript_value_71;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        CHECK_OBJECT(var_values);
        tmp_expression_value_181 = var_values;
        tmp_subscript_value_71 = mod_consts[157];
        tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_181, tmp_subscript_value_71);
        if (tmp_ass_subvalue_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_16 = var_config;
        tmp_ass_subscript_16 = mod_consts[251];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        Py_DECREF(tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_subscript_value_72;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        CHECK_OBJECT(var_values);
        tmp_expression_value_182 = var_values;
        tmp_subscript_value_72 = mod_consts[159];
        tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_182, tmp_subscript_value_72);
        if (tmp_ass_subvalue_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_17 = var_config;
        tmp_ass_subscript_17 = mod_consts[252];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        Py_DECREF(tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_subscript_value_73;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        CHECK_OBJECT(var_values);
        tmp_expression_value_183 = var_values;
        tmp_subscript_value_73 = mod_consts[161];
        tmp_ass_subvalue_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_183, tmp_subscript_value_73);
        if (tmp_ass_subvalue_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_18 = var_config;
        tmp_ass_subscript_18 = mod_consts[253];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        Py_DECREF(tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_subscript_value_74;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        CHECK_OBJECT(var_values);
        tmp_expression_value_184 = var_values;
        tmp_subscript_value_74 = mod_consts[163];
        tmp_ass_subvalue_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_184, tmp_subscript_value_74);
        if (tmp_ass_subvalue_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_19 = var_config;
        tmp_ass_subscript_19 = mod_consts[254];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        Py_DECREF(tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_subscript_value_75;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        CHECK_OBJECT(var_values);
        tmp_expression_value_185 = var_values;
        tmp_subscript_value_75 = mod_consts[165];
        tmp_ass_subvalue_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_185, tmp_subscript_value_75);
        if (tmp_ass_subvalue_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_20 = var_config;
        tmp_ass_subscript_20 = mod_consts[255];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        Py_DECREF(tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_subscript_value_76;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        CHECK_OBJECT(var_values);
        tmp_expression_value_186 = var_values;
        tmp_subscript_value_76 = mod_consts[167];
        tmp_ass_subvalue_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_186, tmp_subscript_value_76);
        if (tmp_ass_subvalue_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_21 = var_config;
        tmp_ass_subscript_21 = mod_consts[256];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        Py_DECREF(tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_subscript_value_77;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        CHECK_OBJECT(var_values);
        tmp_expression_value_187 = var_values;
        tmp_subscript_value_77 = mod_consts[169];
        tmp_ass_subvalue_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_187, tmp_subscript_value_77);
        if (tmp_ass_subvalue_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_22 = var_config;
        tmp_ass_subscript_22 = mod_consts[257];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        Py_DECREF(tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_subscript_value_78;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_ass_subscript_23;
        CHECK_OBJECT(var_values);
        tmp_expression_value_188 = var_values;
        tmp_subscript_value_78 = mod_consts[171];
        tmp_ass_subvalue_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_188, tmp_subscript_value_78);
        if (tmp_ass_subvalue_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_23 = var_config;
        tmp_ass_subscript_23 = mod_consts[258];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
        Py_DECREF(tmp_ass_subvalue_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_subscript_value_79;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_ass_subscript_24;
        CHECK_OBJECT(var_values);
        tmp_expression_value_189 = var_values;
        tmp_subscript_value_79 = mod_consts[173];
        tmp_ass_subvalue_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_189, tmp_subscript_value_79);
        if (tmp_ass_subvalue_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_24 = var_config;
        tmp_ass_subscript_24 = mod_consts[259];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
        Py_DECREF(tmp_ass_subvalue_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_25;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_subscript_value_80;
        PyObject *tmp_ass_subscribed_25;
        PyObject *tmp_ass_subscript_25;
        CHECK_OBJECT(var_values);
        tmp_expression_value_190 = var_values;
        tmp_subscript_value_80 = mod_consts[175];
        tmp_ass_subvalue_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_190, tmp_subscript_value_80);
        if (tmp_ass_subvalue_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_25 = var_config;
        tmp_ass_subscript_25 = mod_consts[260];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
        Py_DECREF(tmp_ass_subvalue_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_subscript_value_81;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_ass_subscript_26;
        CHECK_OBJECT(var_values);
        tmp_expression_value_191 = var_values;
        tmp_subscript_value_81 = mod_consts[177];
        tmp_ass_subvalue_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_191, tmp_subscript_value_81);
        if (tmp_ass_subvalue_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_26 = var_config;
        tmp_ass_subscript_26 = mod_consts[261];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
        Py_DECREF(tmp_ass_subvalue_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_27;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_subscript_value_82;
        PyObject *tmp_ass_subscribed_27;
        PyObject *tmp_ass_subscript_27;
        CHECK_OBJECT(var_values);
        tmp_expression_value_192 = var_values;
        tmp_subscript_value_82 = mod_consts[179];
        tmp_ass_subvalue_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_192, tmp_subscript_value_82);
        if (tmp_ass_subvalue_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_27 = var_config;
        tmp_ass_subscript_27 = mod_consts[262];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
        Py_DECREF(tmp_ass_subvalue_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_28;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_subscript_value_83;
        PyObject *tmp_ass_subscribed_28;
        PyObject *tmp_ass_subscript_28;
        CHECK_OBJECT(var_values);
        tmp_expression_value_193 = var_values;
        tmp_subscript_value_83 = mod_consts[181];
        tmp_ass_subvalue_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_193, tmp_subscript_value_83);
        if (tmp_ass_subvalue_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_28 = var_config;
        tmp_ass_subscript_28 = mod_consts[263];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
        Py_DECREF(tmp_ass_subvalue_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_29;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_subscript_value_84;
        PyObject *tmp_ass_subscribed_29;
        PyObject *tmp_ass_subscript_29;
        CHECK_OBJECT(var_values);
        tmp_expression_value_194 = var_values;
        tmp_subscript_value_84 = mod_consts[183];
        tmp_ass_subvalue_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_194, tmp_subscript_value_84);
        if (tmp_ass_subvalue_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_29 = var_config;
        tmp_ass_subscript_29 = mod_consts[264];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
        Py_DECREF(tmp_ass_subvalue_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_30;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_subscript_value_85;
        PyObject *tmp_ass_subscribed_30;
        PyObject *tmp_ass_subscript_30;
        CHECK_OBJECT(var_values);
        tmp_expression_value_195 = var_values;
        tmp_subscript_value_85 = mod_consts[185];
        tmp_ass_subvalue_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_195, tmp_subscript_value_85);
        if (tmp_ass_subvalue_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_30 = var_config;
        tmp_ass_subscript_30 = mod_consts[265];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
        Py_DECREF(tmp_ass_subvalue_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_31;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_subscript_value_86;
        PyObject *tmp_ass_subscribed_31;
        PyObject *tmp_ass_subscript_31;
        CHECK_OBJECT(var_values);
        tmp_expression_value_196 = var_values;
        tmp_subscript_value_86 = mod_consts[187];
        tmp_ass_subvalue_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_196, tmp_subscript_value_86);
        if (tmp_ass_subvalue_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_31);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_31 = var_config;
        tmp_ass_subscript_31 = mod_consts[266];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
        Py_DECREF(tmp_ass_subvalue_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_32;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_subscript_value_87;
        PyObject *tmp_ass_subscribed_32;
        PyObject *tmp_ass_subscript_32;
        CHECK_OBJECT(var_values);
        tmp_expression_value_197 = var_values;
        tmp_subscript_value_87 = mod_consts[189];
        tmp_ass_subvalue_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_197, tmp_subscript_value_87);
        if (tmp_ass_subvalue_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 421;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_32 = var_config;
        tmp_ass_subscript_32 = mod_consts[267];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
        Py_DECREF(tmp_ass_subvalue_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_33;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_subscript_value_88;
        PyObject *tmp_ass_subscribed_33;
        PyObject *tmp_ass_subscript_33;
        CHECK_OBJECT(var_values);
        tmp_expression_value_198 = var_values;
        tmp_subscript_value_88 = mod_consts[191];
        tmp_ass_subvalue_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_198, tmp_subscript_value_88);
        if (tmp_ass_subvalue_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_33 = var_config;
        tmp_ass_subscript_33 = mod_consts[268];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
        Py_DECREF(tmp_ass_subvalue_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_34;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_subscript_value_89;
        PyObject *tmp_ass_subscribed_34;
        PyObject *tmp_ass_subscript_34;
        CHECK_OBJECT(var_values);
        tmp_expression_value_199 = var_values;
        tmp_subscript_value_89 = mod_consts[193];
        tmp_ass_subvalue_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_199, tmp_subscript_value_89);
        if (tmp_ass_subvalue_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_34);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_34 = var_config;
        tmp_ass_subscript_34 = mod_consts[269];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
        Py_DECREF(tmp_ass_subvalue_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_35;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_subscript_value_90;
        PyObject *tmp_ass_subscribed_35;
        PyObject *tmp_ass_subscript_35;
        CHECK_OBJECT(var_values);
        tmp_expression_value_200 = var_values;
        tmp_subscript_value_90 = mod_consts[195];
        tmp_ass_subvalue_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_200, tmp_subscript_value_90);
        if (tmp_ass_subvalue_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_35 = var_config;
        tmp_ass_subscript_35 = mod_consts[270];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
        Py_DECREF(tmp_ass_subvalue_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_36;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_subscript_value_91;
        PyObject *tmp_ass_subscribed_36;
        PyObject *tmp_ass_subscript_36;
        CHECK_OBJECT(var_values);
        tmp_expression_value_201 = var_values;
        tmp_subscript_value_91 = mod_consts[197];
        tmp_ass_subvalue_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_201, tmp_subscript_value_91);
        if (tmp_ass_subvalue_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_36 = var_config;
        tmp_ass_subscript_36 = mod_consts[271];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
        Py_DECREF(tmp_ass_subvalue_36);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_37;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_subscript_value_92;
        PyObject *tmp_ass_subscribed_37;
        PyObject *tmp_ass_subscript_37;
        CHECK_OBJECT(var_values);
        tmp_expression_value_202 = var_values;
        tmp_subscript_value_92 = mod_consts[199];
        tmp_ass_subvalue_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_202, tmp_subscript_value_92);
        if (tmp_ass_subvalue_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_37 = var_config;
        tmp_ass_subscript_37 = mod_consts[272];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
        Py_DECREF(tmp_ass_subvalue_37);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_38;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_subscript_value_93;
        PyObject *tmp_ass_subscribed_38;
        PyObject *tmp_ass_subscript_38;
        CHECK_OBJECT(var_values);
        tmp_expression_value_203 = var_values;
        tmp_subscript_value_93 = mod_consts[201];
        tmp_ass_subvalue_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_203, tmp_subscript_value_93);
        if (tmp_ass_subvalue_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_38 = var_config;
        tmp_ass_subscript_38 = mod_consts[273];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
        Py_DECREF(tmp_ass_subvalue_38);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_39;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_subscript_value_94;
        PyObject *tmp_ass_subscribed_39;
        PyObject *tmp_ass_subscript_39;
        CHECK_OBJECT(var_values);
        tmp_expression_value_204 = var_values;
        tmp_subscript_value_94 = mod_consts[203];
        tmp_ass_subvalue_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_204, tmp_subscript_value_94);
        if (tmp_ass_subvalue_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_39 = var_config;
        tmp_ass_subscript_39 = mod_consts[274];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
        Py_DECREF(tmp_ass_subvalue_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_40;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_subscript_value_95;
        PyObject *tmp_ass_subscribed_40;
        PyObject *tmp_ass_subscript_40;
        CHECK_OBJECT(var_values);
        tmp_expression_value_205 = var_values;
        tmp_subscript_value_95 = mod_consts[205];
        tmp_ass_subvalue_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_205, tmp_subscript_value_95);
        if (tmp_ass_subvalue_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_40 = var_config;
        tmp_ass_subscript_40 = mod_consts[275];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
        Py_DECREF(tmp_ass_subvalue_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_41;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_subscript_value_96;
        PyObject *tmp_ass_subscribed_41;
        PyObject *tmp_ass_subscript_41;
        CHECK_OBJECT(var_values);
        tmp_expression_value_206 = var_values;
        tmp_subscript_value_96 = mod_consts[207];
        tmp_ass_subvalue_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_206, tmp_subscript_value_96);
        if (tmp_ass_subvalue_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_41 = var_config;
        tmp_ass_subscript_41 = mod_consts[276];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
        Py_DECREF(tmp_ass_subvalue_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_42;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_97;
        PyObject *tmp_ass_subscribed_42;
        PyObject *tmp_ass_subscript_42;
        CHECK_OBJECT(var_values);
        tmp_expression_value_207 = var_values;
        tmp_subscript_value_97 = mod_consts[209];
        tmp_ass_subvalue_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_207, tmp_subscript_value_97);
        if (tmp_ass_subvalue_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_42 = var_config;
        tmp_ass_subscript_42 = mod_consts[277];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
        Py_DECREF(tmp_ass_subvalue_42);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_43;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_subscript_value_98;
        PyObject *tmp_ass_subscribed_43;
        PyObject *tmp_ass_subscript_43;
        CHECK_OBJECT(var_values);
        tmp_expression_value_208 = var_values;
        tmp_subscript_value_98 = mod_consts[211];
        tmp_ass_subvalue_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_208, tmp_subscript_value_98);
        if (tmp_ass_subvalue_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_43);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_43 = var_config;
        tmp_ass_subscript_43 = mod_consts[278];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
        Py_DECREF(tmp_ass_subvalue_43);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_44;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_subscript_value_99;
        PyObject *tmp_ass_subscribed_44;
        PyObject *tmp_ass_subscript_44;
        CHECK_OBJECT(var_values);
        tmp_expression_value_209 = var_values;
        tmp_subscript_value_99 = mod_consts[213];
        tmp_ass_subvalue_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_209, tmp_subscript_value_99);
        if (tmp_ass_subvalue_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_44 = var_config;
        tmp_ass_subscript_44 = mod_consts[279];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
        Py_DECREF(tmp_ass_subvalue_44);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_45;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_subscript_value_100;
        PyObject *tmp_ass_subscribed_45;
        PyObject *tmp_ass_subscript_45;
        CHECK_OBJECT(var_values);
        tmp_expression_value_210 = var_values;
        tmp_subscript_value_100 = mod_consts[215];
        tmp_ass_subvalue_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_210, tmp_subscript_value_100);
        if (tmp_ass_subvalue_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_45);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_45 = var_config;
        tmp_ass_subscript_45 = mod_consts[280];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
        Py_DECREF(tmp_ass_subvalue_45);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_46;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_subscript_value_101;
        PyObject *tmp_ass_subscribed_46;
        PyObject *tmp_ass_subscript_46;
        CHECK_OBJECT(var_values);
        tmp_expression_value_211 = var_values;
        tmp_subscript_value_101 = mod_consts[217];
        tmp_ass_subvalue_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_211, tmp_subscript_value_101);
        if (tmp_ass_subvalue_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_46 = var_config;
        tmp_ass_subscript_46 = mod_consts[281];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
        Py_DECREF(tmp_ass_subvalue_46);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_47;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_subscript_value_102;
        PyObject *tmp_ass_subscribed_47;
        PyObject *tmp_ass_subscript_47;
        CHECK_OBJECT(var_values);
        tmp_expression_value_212 = var_values;
        tmp_subscript_value_102 = mod_consts[219];
        tmp_ass_subvalue_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_212, tmp_subscript_value_102);
        if (tmp_ass_subvalue_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_47 = var_config;
        tmp_ass_subscript_47 = mod_consts[282];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
        Py_DECREF(tmp_ass_subvalue_47);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_48;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_subscript_value_103;
        PyObject *tmp_ass_subscribed_48;
        PyObject *tmp_ass_subscript_48;
        CHECK_OBJECT(var_values);
        tmp_expression_value_213 = var_values;
        tmp_subscript_value_103 = mod_consts[221];
        tmp_ass_subvalue_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_213, tmp_subscript_value_103);
        if (tmp_ass_subvalue_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_48 = var_config;
        tmp_ass_subscript_48 = mod_consts[283];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
        Py_DECREF(tmp_ass_subvalue_48);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_49;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_subscript_value_104;
        PyObject *tmp_ass_subscribed_49;
        PyObject *tmp_ass_subscript_49;
        CHECK_OBJECT(var_values);
        tmp_expression_value_214 = var_values;
        tmp_subscript_value_104 = mod_consts[223];
        tmp_ass_subvalue_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_214, tmp_subscript_value_104);
        if (tmp_ass_subvalue_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_49);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_49 = var_config;
        tmp_ass_subscript_49 = mod_consts[284];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
        Py_DECREF(tmp_ass_subvalue_49);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_50;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_subscript_value_105;
        PyObject *tmp_ass_subscribed_50;
        PyObject *tmp_ass_subscript_50;
        CHECK_OBJECT(var_values);
        tmp_expression_value_215 = var_values;
        tmp_subscript_value_105 = mod_consts[225];
        tmp_ass_subvalue_50 = LOOKUP_SUBSCRIPT(tmp_expression_value_215, tmp_subscript_value_105);
        if (tmp_ass_subvalue_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_50);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_50 = var_config;
        tmp_ass_subscript_50 = mod_consts[34];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
        Py_DECREF(tmp_ass_subvalue_50);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_51;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_subscript_value_106;
        PyObject *tmp_ass_subscribed_51;
        PyObject *tmp_ass_subscript_51;
        CHECK_OBJECT(var_values);
        tmp_expression_value_216 = var_values;
        tmp_subscript_value_106 = mod_consts[227];
        tmp_ass_subvalue_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_216, tmp_subscript_value_106);
        if (tmp_ass_subvalue_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_51);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_51 = var_config;
        tmp_ass_subscript_51 = mod_consts[285];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
        Py_DECREF(tmp_ass_subvalue_51);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_52;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_subscript_value_107;
        PyObject *tmp_ass_subscribed_52;
        PyObject *tmp_ass_subscript_52;
        CHECK_OBJECT(var_values);
        tmp_expression_value_217 = var_values;
        tmp_subscript_value_107 = mod_consts[229];
        tmp_ass_subvalue_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_217, tmp_subscript_value_107);
        if (tmp_ass_subvalue_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_52);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_52 = var_config;
        tmp_ass_subscript_52 = mod_consts[286];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
        Py_DECREF(tmp_ass_subvalue_52);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_53;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_subscript_value_108;
        PyObject *tmp_ass_subscribed_53;
        PyObject *tmp_ass_subscript_53;
        CHECK_OBJECT(var_values);
        tmp_expression_value_218 = var_values;
        tmp_subscript_value_108 = mod_consts[231];
        tmp_ass_subvalue_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_218, tmp_subscript_value_108);
        if (tmp_ass_subvalue_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_53);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_53 = var_config;
        tmp_ass_subscript_53 = mod_consts[287];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
        Py_DECREF(tmp_ass_subvalue_53);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_54;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_subscript_value_109;
        PyObject *tmp_ass_subscribed_54;
        PyObject *tmp_ass_subscript_54;
        CHECK_OBJECT(var_values);
        tmp_expression_value_219 = var_values;
        tmp_subscript_value_109 = mod_consts[233];
        tmp_ass_subvalue_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_219, tmp_subscript_value_109);
        if (tmp_ass_subvalue_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_ass_subvalue_54);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_54 = var_config;
        tmp_ass_subscript_54 = mod_consts[288];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
        Py_DECREF(tmp_ass_subvalue_54);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        if (Nuitka_Cell_GET(var_custom_json) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[289]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_4;
        }

        tmp_open_filename_1 = Nuitka_Cell_GET(var_custom_json);
        tmp_open_mode_1 = mod_consts[290];
        tmp_assign_source_12 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_with_1__source;
            tmp_with_1__source = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_220;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_220 = tmp_with_1__source;
        tmp_called_value_114 = LOOKUP_SPECIAL(tmp_expression_value_220, mod_consts[113]);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_4;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 445;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_114);
        Py_DECREF(tmp_called_value_114);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_with_1__enter;
            tmp_with_1__enter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_221;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_221 = tmp_with_1__source;
        tmp_assign_source_14 = LOOKUP_SPECIAL(tmp_expression_value_221, mod_consts[114]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_with_1__exit;
            tmp_with_1__exit = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_15;
        tmp_assign_source_15 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_16 = tmp_with_1__enter;
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_16;
            Py_INCREF(var_file);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_222 == NULL)) {
            tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ocooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[291]);
        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ocooooooo";
            goto try_except_handler_6;
        }
        if (var_config == NULL) {
            Py_DECREF(tmp_called_value_115);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "ocooooooo";
            goto try_except_handler_6;
        }

        tmp_tuple_element_2 = var_config;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_file);
        tmp_tuple_element_2 = var_file;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[292]);
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 446;
        tmp_call_result_57 = CALL_FUNCTION(tmp_called_value_115, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ocooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_57);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_7689733633d28c77cfa186ceb9cd6d88, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_7689733633d28c77cfa186ceb9cd6d88, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_116;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_116 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_116, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 445;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7689733633d28c77cfa186ceb9cd6d88->m_frame) frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooooo";
    goto try_except_handler_7;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 445;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7689733633d28c77cfa186ceb9cd6d88->m_frame) frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooooo";
    goto try_except_handler_7;
    branch_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_call_result_58;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_117 = tmp_with_1__exit;
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 445;
        tmp_call_result_58 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_117, mod_consts[117]);

        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);

            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_58);
    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_118 = tmp_with_1__exit;
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 445;
        tmp_call_result_59 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_118, mod_consts[117]);

        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_59);
    }
    branch_no_7:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_60;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 448;
        tmp_call_result_60 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[293], 0)
        );

        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    branch_no_3:;
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 382;
        type_description_1 = "ocooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_61;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_window;
        frame_7689733633d28c77cfa186ceb9cd6d88->m_frame.f_lineno = 451;
        tmp_call_result_61 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[66]);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7689733633d28c77cfa186ceb9cd6d88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7689733633d28c77cfa186ceb9cd6d88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7689733633d28c77cfa186ceb9cd6d88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7689733633d28c77cfa186ceb9cd6d88,
        type_description_1,
        var_path,
        var_custom_json,
        var_config,
        var_layut,
        var_layout,
        var_window,
        var_event,
        var_values,
        var_file
    );


    // Release cached frame if used for exception.
    if (frame_7689733633d28c77cfa186ceb9cd6d88 == cache_frame_7689733633d28c77cfa186ceb9cd6d88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7689733633d28c77cfa186ceb9cd6d88);
        cache_frame_7689733633d28c77cfa186ceb9cd6d88 = NULL;
    }

    assertFrameObject(frame_7689733633d28c77cfa186ceb9cd6d88);

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
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
    CHECK_OBJECT(var_custom_json);
    Py_DECREF(var_custom_json);
    var_custom_json = NULL;
    Py_XDECREF(var_config);
    var_config = NULL;
    CHECK_OBJECT(var_layut);
    Py_DECREF(var_layut);
    var_layut = NULL;
    CHECK_OBJECT(var_layout);
    Py_DECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_path);
    var_path = NULL;
    CHECK_OBJECT(var_custom_json);
    Py_DECREF(var_custom_json);
    var_custom_json = NULL;
    Py_XDECREF(var_config);
    var_config = NULL;
    Py_XDECREF(var_layut);
    var_layut = NULL;
    Py_XDECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__6_profiles_screen$$$function__1_layut(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_menu_layout = NULL;
    PyObject *var_config = NULL;
    PyObject *var_layout = NULL;
    struct Nuitka_FrameObject *frame_71e0bc87aeed0e23396ebab863d03c00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_71e0bc87aeed0e23396ebab863d03c00 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DEEP_COPY_LIST_GUIDED(mod_consts[294], "LilLil");
        assert(var_menu_layout == NULL);
        var_menu_layout = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_71e0bc87aeed0e23396ebab863d03c00)) {
        Py_XDECREF(cache_frame_71e0bc87aeed0e23396ebab863d03c00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71e0bc87aeed0e23396ebab863d03c00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71e0bc87aeed0e23396ebab863d03c00 = MAKE_FUNCTION_FRAME(codeobj_71e0bc87aeed0e23396ebab863d03c00, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_71e0bc87aeed0e23396ebab863d03c00->m_type_description == NULL);
    frame_71e0bc87aeed0e23396ebab863d03c00 = cache_frame_71e0bc87aeed0e23396ebab863d03c00;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71e0bc87aeed0e23396ebab863d03c00);
    assert(Py_REFCNT(frame_71e0bc87aeed0e23396ebab863d03c00) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[289]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 254;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_config == NULL);
        var_config = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_menu_layout);
        tmp_args_element_value_2 = var_menu_layout;
        frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 257;
        tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[72], tmp_args_element_value_2);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
        tmp_assign_source_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_list_element_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oooc";
                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[73]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oooc";
                goto list_build_exception_1;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 259;
                type_description_1 = "oooc";
                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[295]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 259;
                type_description_1 = "oooc";
                goto list_build_exception_1;
            }
            frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 259;
            tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[296], 0), mod_consts[108]);
            Py_DECREF(tmp_called_value_3);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 259;
                type_description_1 = "oooc";
                goto list_build_exception_1;
            }
            tmp_list_element_4 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_called_value_4;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_called_value_5;
                PyObject *tmp_expression_value_4;
                PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_5);
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_1 = "oooc";
                    goto list_build_exception_2;
                }
                tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[295]);
                if (tmp_called_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_1 = "oooc";
                    goto list_build_exception_2;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 260;
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[297], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_4);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_1 = "oooc";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_5);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;
                    type_description_1 = "oooc";
                    goto list_build_exception_2;
                }
                tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[295]);
                if (tmp_called_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;
                    type_description_1 = "oooc";
                    goto list_build_exception_2;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 261;
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[298], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_5);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;
                    type_description_1 = "oooc";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_5);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_list_element_4);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_args_element_value_3 = MAKE_LIST_EMPTY(21);
            {
                PyObject *tmp_list_element_6;
                PyObject *tmp_called_value_6;
                PyObject *tmp_expression_value_5;
                PyObject *tmp_list_element_7;
                PyObject *tmp_called_value_9;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_list_element_8;
                PyObject *tmp_called_value_11;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_list_element_9;
                PyObject *tmp_called_value_13;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_list_element_10;
                PyObject *tmp_called_value_15;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_list_element_11;
                PyObject *tmp_called_value_18;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_list_element_12;
                PyObject *tmp_called_value_23;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_list_element_13;
                PyObject *tmp_called_value_27;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_list_element_14;
                PyObject *tmp_called_value_29;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_list_element_15;
                PyObject *tmp_called_value_31;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_list_element_16;
                PyObject *tmp_called_value_34;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_list_element_17;
                PyObject *tmp_called_value_36;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_list_element_18;
                PyObject *tmp_called_value_38;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_list_element_19;
                PyObject *tmp_called_value_40;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_list_element_20;
                PyObject *tmp_called_value_43;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_list_element_21;
                PyObject *tmp_called_value_45;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_list_element_22;
                PyObject *tmp_called_value_47;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_list_element_23;
                PyObject *tmp_called_value_50;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_list_element_24;
                PyObject *tmp_called_value_53;
                PyObject *tmp_expression_value_52;
                PyObject *tmp_list_element_25;
                PyObject *tmp_called_value_56;
                PyObject *tmp_expression_value_55;
                PyList_SET_ITEM(tmp_args_element_value_3, 0, tmp_list_element_4);
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[295]);
                if (tmp_called_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 262;
                tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[299], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_6);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(3);
                {
                    PyObject *tmp_called_value_7;
                    PyObject *tmp_expression_value_6;
                    PyObject *tmp_called_value_8;
                    PyObject *tmp_expression_value_7;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_6);
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_1 = "oooc";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[295]);
                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_1 = "oooc";
                        goto list_build_exception_4;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 263;
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[300], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_7);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_1 = "oooc";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_6);
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 264;
                        type_description_1 = "oooc";
                        goto list_build_exception_4;
                    }
                    tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[295]);
                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 264;
                        type_description_1 = "oooc";
                        goto list_build_exception_4;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 264;
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[301], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_8);
                    if (tmp_list_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 264;
                        type_description_1 = "oooc";
                        goto list_build_exception_4;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_6);
                }
                goto list_build_noexception_2;
                // Exception handling pass through code for list_build:
                list_build_exception_4:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_2:;
                PyList_SET_ITEM(tmp_args_element_value_3, 1, tmp_list_element_4);
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[295]);
                if (tmp_called_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 265;
                tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[302], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_9);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_10;
                    PyObject *tmp_expression_value_9;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_7);
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 266;
                        type_description_1 = "oooc";
                        goto list_build_exception_5;
                    }
                    tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[295]);
                    if (tmp_called_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 266;
                        type_description_1 = "oooc";
                        goto list_build_exception_5;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 266;
                    tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[303], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_10);
                    if (tmp_list_element_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 266;
                        type_description_1 = "oooc";
                        goto list_build_exception_5;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_7);
                }
                goto list_build_noexception_3;
                // Exception handling pass through code for list_build:
                list_build_exception_5:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_3:;
                PyList_SET_ITEM(tmp_args_element_value_3, 2, tmp_list_element_4);
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 267;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[295]);
                if (tmp_called_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 267;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 267;
                tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[304], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_11);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 267;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_12;
                    PyObject *tmp_expression_value_11;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_8);
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 268;
                        type_description_1 = "oooc";
                        goto list_build_exception_6;
                    }
                    tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[295]);
                    if (tmp_called_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 268;
                        type_description_1 = "oooc";
                        goto list_build_exception_6;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 268;
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[305], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_12);
                    if (tmp_list_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 268;
                        type_description_1 = "oooc";
                        goto list_build_exception_6;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_8);
                }
                goto list_build_noexception_4;
                // Exception handling pass through code for list_build:
                list_build_exception_6:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_4:;
                PyList_SET_ITEM(tmp_args_element_value_3, 3, tmp_list_element_4);
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[295]);
                if (tmp_called_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 269;
                tmp_list_element_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[306], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_13);
                if (tmp_list_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_14;
                    PyObject *tmp_expression_value_13;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_9);
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 270;
                        type_description_1 = "oooc";
                        goto list_build_exception_7;
                    }
                    tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[295]);
                    if (tmp_called_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 270;
                        type_description_1 = "oooc";
                        goto list_build_exception_7;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 270;
                    tmp_list_element_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[307], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_14);
                    if (tmp_list_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 270;
                        type_description_1 = "oooc";
                        goto list_build_exception_7;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_9);
                }
                goto list_build_noexception_5;
                // Exception handling pass through code for list_build:
                list_build_exception_7:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_5:;
                PyList_SET_ITEM(tmp_args_element_value_3, 4, tmp_list_element_4);
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[295]);
                if (tmp_called_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 271;
                tmp_list_element_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[308], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_15);
                if (tmp_list_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(3);
                {
                    PyObject *tmp_called_value_16;
                    PyObject *tmp_expression_value_15;
                    PyObject *tmp_called_value_17;
                    PyObject *tmp_expression_value_16;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_10);
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 272;
                        type_description_1 = "oooc";
                        goto list_build_exception_8;
                    }
                    tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[295]);
                    if (tmp_called_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 272;
                        type_description_1 = "oooc";
                        goto list_build_exception_8;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 272;
                    tmp_list_element_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[309], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_16);
                    if (tmp_list_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 272;
                        type_description_1 = "oooc";
                        goto list_build_exception_8;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_10);
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_1 = "oooc";
                        goto list_build_exception_8;
                    }
                    tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[295]);
                    if (tmp_called_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_1 = "oooc";
                        goto list_build_exception_8;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 273;
                    tmp_list_element_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[310], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_17);
                    if (tmp_list_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_1 = "oooc";
                        goto list_build_exception_8;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_10);
                }
                goto list_build_noexception_6;
                // Exception handling pass through code for list_build:
                list_build_exception_8:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_6:;
                PyList_SET_ITEM(tmp_args_element_value_3, 5, tmp_list_element_4);
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 274;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[295]);
                if (tmp_called_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 274;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 274;
                tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[311], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_18);
                if (tmp_list_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 274;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(5);
                {
                    PyObject *tmp_called_value_19;
                    PyObject *tmp_expression_value_18;
                    PyObject *tmp_called_value_20;
                    PyObject *tmp_expression_value_19;
                    PyObject *tmp_called_value_21;
                    PyObject *tmp_expression_value_20;
                    PyObject *tmp_called_value_22;
                    PyObject *tmp_expression_value_21;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_11);
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 275;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[295]);
                    if (tmp_called_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 275;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 275;
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[312], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_19);
                    if (tmp_list_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 275;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_11);
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 276;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[295]);
                    if (tmp_called_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 276;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 276;
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[313], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_20);
                    if (tmp_list_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 276;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_11);
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[295]);
                    if (tmp_called_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 277;
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[314], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_21);
                    if (tmp_list_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 3, tmp_list_element_11);
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[295]);
                    if (tmp_called_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 278;
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[315], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_22);
                    if (tmp_list_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;
                        type_description_1 = "oooc";
                        goto list_build_exception_9;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 4, tmp_list_element_11);
                }
                goto list_build_noexception_7;
                // Exception handling pass through code for list_build:
                list_build_exception_9:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_7:;
                PyList_SET_ITEM(tmp_args_element_value_3, 6, tmp_list_element_4);
                tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_22 == NULL)) {
                    tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[295]);
                if (tmp_called_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 279;
                tmp_list_element_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[316], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_23);
                if (tmp_list_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(4);
                {
                    PyObject *tmp_called_value_24;
                    PyObject *tmp_expression_value_23;
                    PyObject *tmp_called_value_25;
                    PyObject *tmp_expression_value_24;
                    PyObject *tmp_called_value_26;
                    PyObject *tmp_expression_value_25;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_12);
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 280;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[295]);
                    if (tmp_called_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 280;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 280;
                    tmp_list_element_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[317], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_24);
                    if (tmp_list_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 280;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_12);
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[295]);
                    if (tmp_called_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 281;
                    tmp_list_element_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[318], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_25);
                    if (tmp_list_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_12);
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[295]);
                    if (tmp_called_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 282;
                    tmp_list_element_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[319], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_26);
                    if (tmp_list_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_1 = "oooc";
                        goto list_build_exception_10;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 3, tmp_list_element_12);
                }
                goto list_build_noexception_8;
                // Exception handling pass through code for list_build:
                list_build_exception_10:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_8:;
                PyList_SET_ITEM(tmp_args_element_value_3, 7, tmp_list_element_4);
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[295]);
                if (tmp_called_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 283;
                tmp_list_element_13 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[320], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_27);
                if (tmp_list_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_expression_value_27;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_13);
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 284;
                        type_description_1 = "oooc";
                        goto list_build_exception_11;
                    }
                    tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[295]);
                    if (tmp_called_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 284;
                        type_description_1 = "oooc";
                        goto list_build_exception_11;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 284;
                    tmp_list_element_13 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[321], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_28);
                    if (tmp_list_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 284;
                        type_description_1 = "oooc";
                        goto list_build_exception_11;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_13);
                }
                goto list_build_noexception_9;
                // Exception handling pass through code for list_build:
                list_build_exception_11:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_9:;
                PyList_SET_ITEM(tmp_args_element_value_3, 8, tmp_list_element_4);
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 285;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[295]);
                if (tmp_called_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 285;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 285;
                tmp_list_element_14 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[322], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_29);
                if (tmp_list_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 285;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_30;
                    PyObject *tmp_expression_value_29;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_14);
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 286;
                        type_description_1 = "oooc";
                        goto list_build_exception_12;
                    }
                    tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[295]);
                    if (tmp_called_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 286;
                        type_description_1 = "oooc";
                        goto list_build_exception_12;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 286;
                    tmp_list_element_14 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[323], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_30);
                    if (tmp_list_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 286;
                        type_description_1 = "oooc";
                        goto list_build_exception_12;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_14);
                }
                goto list_build_noexception_10;
                // Exception handling pass through code for list_build:
                list_build_exception_12:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_10:;
                PyList_SET_ITEM(tmp_args_element_value_3, 9, tmp_list_element_4);
                tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_30 == NULL)) {
                    tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[295]);
                if (tmp_called_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 287;
                tmp_list_element_15 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[324], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_31);
                if (tmp_list_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(3);
                {
                    PyObject *tmp_called_value_32;
                    PyObject *tmp_expression_value_31;
                    PyObject *tmp_called_value_33;
                    PyObject *tmp_expression_value_32;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_15);
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 288;
                        type_description_1 = "oooc";
                        goto list_build_exception_13;
                    }
                    tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[295]);
                    if (tmp_called_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 288;
                        type_description_1 = "oooc";
                        goto list_build_exception_13;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 288;
                    tmp_list_element_15 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[325], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_32);
                    if (tmp_list_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 288;
                        type_description_1 = "oooc";
                        goto list_build_exception_13;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_15);
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_1 = "oooc";
                        goto list_build_exception_13;
                    }
                    tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[295]);
                    if (tmp_called_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_1 = "oooc";
                        goto list_build_exception_13;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 289;
                    tmp_list_element_15 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[326], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_33);
                    if (tmp_list_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_1 = "oooc";
                        goto list_build_exception_13;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_15);
                }
                goto list_build_noexception_11;
                // Exception handling pass through code for list_build:
                list_build_exception_13:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_11:;
                PyList_SET_ITEM(tmp_args_element_value_3, 10, tmp_list_element_4);
                tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_33 == NULL)) {
                    tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[295]);
                if (tmp_called_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 290;
                tmp_list_element_16 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[327], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_34);
                if (tmp_list_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_35;
                    PyObject *tmp_expression_value_34;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_16);
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 291;
                        type_description_1 = "oooc";
                        goto list_build_exception_14;
                    }
                    tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[295]);
                    if (tmp_called_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 291;
                        type_description_1 = "oooc";
                        goto list_build_exception_14;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 291;
                    tmp_list_element_16 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[328], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_35);
                    if (tmp_list_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 291;
                        type_description_1 = "oooc";
                        goto list_build_exception_14;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_16);
                }
                goto list_build_noexception_12;
                // Exception handling pass through code for list_build:
                list_build_exception_14:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_12:;
                PyList_SET_ITEM(tmp_args_element_value_3, 11, tmp_list_element_4);
                tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_35 == NULL)) {
                    tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[295]);
                if (tmp_called_value_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 292;
                tmp_list_element_17 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_36, &PyTuple_GET_ITEM(mod_consts[329], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_36);
                if (tmp_list_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_37;
                    PyObject *tmp_expression_value_36;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_17);
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 293;
                        type_description_1 = "oooc";
                        goto list_build_exception_15;
                    }
                    tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[295]);
                    if (tmp_called_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 293;
                        type_description_1 = "oooc";
                        goto list_build_exception_15;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 293;
                    tmp_list_element_17 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_37, &PyTuple_GET_ITEM(mod_consts[330], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_37);
                    if (tmp_list_element_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 293;
                        type_description_1 = "oooc";
                        goto list_build_exception_15;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_17);
                }
                goto list_build_noexception_13;
                // Exception handling pass through code for list_build:
                list_build_exception_15:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_13:;
                PyList_SET_ITEM(tmp_args_element_value_3, 12, tmp_list_element_4);
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[295]);
                if (tmp_called_value_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 294;
                tmp_list_element_18 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_38, &PyTuple_GET_ITEM(mod_consts[331], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_38);
                if (tmp_list_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_39;
                    PyObject *tmp_expression_value_38;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_18);
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_1 = "oooc";
                        goto list_build_exception_16;
                    }
                    tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[295]);
                    if (tmp_called_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_1 = "oooc";
                        goto list_build_exception_16;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 295;
                    tmp_list_element_18 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_39, &PyTuple_GET_ITEM(mod_consts[332], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_39);
                    if (tmp_list_element_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_1 = "oooc";
                        goto list_build_exception_16;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_18);
                }
                goto list_build_noexception_14;
                // Exception handling pass through code for list_build:
                list_build_exception_16:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_14:;
                PyList_SET_ITEM(tmp_args_element_value_3, 13, tmp_list_element_4);
                tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_39 == NULL)) {
                    tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[295]);
                if (tmp_called_value_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 296;
                tmp_list_element_19 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_40, &PyTuple_GET_ITEM(mod_consts[333], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_40);
                if (tmp_list_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(3);
                {
                    PyObject *tmp_called_value_41;
                    PyObject *tmp_expression_value_40;
                    PyObject *tmp_called_value_42;
                    PyObject *tmp_expression_value_41;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_19);
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 297;
                        type_description_1 = "oooc";
                        goto list_build_exception_17;
                    }
                    tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[295]);
                    if (tmp_called_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 297;
                        type_description_1 = "oooc";
                        goto list_build_exception_17;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 297;
                    tmp_list_element_19 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_41, &PyTuple_GET_ITEM(mod_consts[334], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_41);
                    if (tmp_list_element_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 297;
                        type_description_1 = "oooc";
                        goto list_build_exception_17;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_19);
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 298;
                        type_description_1 = "oooc";
                        goto list_build_exception_17;
                    }
                    tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[295]);
                    if (tmp_called_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 298;
                        type_description_1 = "oooc";
                        goto list_build_exception_17;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 298;
                    tmp_list_element_19 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_42, &PyTuple_GET_ITEM(mod_consts[335], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_42);
                    if (tmp_list_element_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 298;
                        type_description_1 = "oooc";
                        goto list_build_exception_17;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_19);
                }
                goto list_build_noexception_15;
                // Exception handling pass through code for list_build:
                list_build_exception_17:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_15:;
                PyList_SET_ITEM(tmp_args_element_value_3, 14, tmp_list_element_4);
                tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_42 == NULL)) {
                    tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[295]);
                if (tmp_called_value_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 299;
                tmp_list_element_20 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[336], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_43);
                if (tmp_list_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_44;
                    PyObject *tmp_expression_value_43;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_20);
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 300;
                        type_description_1 = "oooc";
                        goto list_build_exception_18;
                    }
                    tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[295]);
                    if (tmp_called_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 300;
                        type_description_1 = "oooc";
                        goto list_build_exception_18;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 300;
                    tmp_list_element_20 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_44, &PyTuple_GET_ITEM(mod_consts[337], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_44);
                    if (tmp_list_element_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 300;
                        type_description_1 = "oooc";
                        goto list_build_exception_18;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_20);
                }
                goto list_build_noexception_16;
                // Exception handling pass through code for list_build:
                list_build_exception_18:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_16:;
                PyList_SET_ITEM(tmp_args_element_value_3, 15, tmp_list_element_4);
                tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_44 == NULL)) {
                    tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 301;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[295]);
                if (tmp_called_value_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 301;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 301;
                tmp_list_element_21 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[338], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_45);
                if (tmp_list_element_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 301;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_value_46;
                    PyObject *tmp_expression_value_45;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_21);
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_1 = "oooc";
                        goto list_build_exception_19;
                    }
                    tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[295]);
                    if (tmp_called_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_1 = "oooc";
                        goto list_build_exception_19;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 302;
                    tmp_list_element_21 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_46, &PyTuple_GET_ITEM(mod_consts[339], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_46);
                    if (tmp_list_element_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_1 = "oooc";
                        goto list_build_exception_19;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_21);
                }
                goto list_build_noexception_17;
                // Exception handling pass through code for list_build:
                list_build_exception_19:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_17:;
                PyList_SET_ITEM(tmp_args_element_value_3, 16, tmp_list_element_4);
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[295]);
                if (tmp_called_value_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 303;
                tmp_list_element_22 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_47, &PyTuple_GET_ITEM(mod_consts[340], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_47);
                if (tmp_list_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(3);
                {
                    PyObject *tmp_called_value_48;
                    PyObject *tmp_expression_value_47;
                    PyObject *tmp_called_value_49;
                    PyObject *tmp_expression_value_48;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_22);
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_1 = "oooc";
                        goto list_build_exception_20;
                    }
                    tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[295]);
                    if (tmp_called_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_1 = "oooc";
                        goto list_build_exception_20;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 304;
                    tmp_list_element_22 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_48, &PyTuple_GET_ITEM(mod_consts[341], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_48);
                    if (tmp_list_element_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_1 = "oooc";
                        goto list_build_exception_20;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_22);
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 305;
                        type_description_1 = "oooc";
                        goto list_build_exception_20;
                    }
                    tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[295]);
                    if (tmp_called_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 305;
                        type_description_1 = "oooc";
                        goto list_build_exception_20;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 305;
                    tmp_list_element_22 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[342], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_49);
                    if (tmp_list_element_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 305;
                        type_description_1 = "oooc";
                        goto list_build_exception_20;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_22);
                }
                goto list_build_noexception_18;
                // Exception handling pass through code for list_build:
                list_build_exception_20:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_18:;
                PyList_SET_ITEM(tmp_args_element_value_3, 17, tmp_list_element_4);
                tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_49 == NULL)) {
                    tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 306;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[295]);
                if (tmp_called_value_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 306;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 306;
                tmp_list_element_23 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_50, &PyTuple_GET_ITEM(mod_consts[343], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_50);
                if (tmp_list_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 306;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(3);
                {
                    PyObject *tmp_called_value_51;
                    PyObject *tmp_expression_value_50;
                    PyObject *tmp_called_value_52;
                    PyObject *tmp_expression_value_51;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_23);
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 307;
                        type_description_1 = "oooc";
                        goto list_build_exception_21;
                    }
                    tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[295]);
                    if (tmp_called_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 307;
                        type_description_1 = "oooc";
                        goto list_build_exception_21;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 307;
                    tmp_list_element_23 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_51, &PyTuple_GET_ITEM(mod_consts[344], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_51);
                    if (tmp_list_element_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 307;
                        type_description_1 = "oooc";
                        goto list_build_exception_21;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_23);
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 308;
                        type_description_1 = "oooc";
                        goto list_build_exception_21;
                    }
                    tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[295]);
                    if (tmp_called_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 308;
                        type_description_1 = "oooc";
                        goto list_build_exception_21;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 308;
                    tmp_list_element_23 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_52, &PyTuple_GET_ITEM(mod_consts[345], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_52);
                    if (tmp_list_element_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 308;
                        type_description_1 = "oooc";
                        goto list_build_exception_21;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_23);
                }
                goto list_build_noexception_19;
                // Exception handling pass through code for list_build:
                list_build_exception_21:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_19:;
                PyList_SET_ITEM(tmp_args_element_value_3, 18, tmp_list_element_4);
                tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_52 == NULL)) {
                    tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[295]);
                if (tmp_called_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 309;
                tmp_list_element_24 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_53, &PyTuple_GET_ITEM(mod_consts[346], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_53);
                if (tmp_list_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(3);
                {
                    PyObject *tmp_called_value_54;
                    PyObject *tmp_expression_value_53;
                    PyObject *tmp_called_value_55;
                    PyObject *tmp_expression_value_54;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_24);
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 310;
                        type_description_1 = "oooc";
                        goto list_build_exception_22;
                    }
                    tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[295]);
                    if (tmp_called_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 310;
                        type_description_1 = "oooc";
                        goto list_build_exception_22;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 310;
                    tmp_list_element_24 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_54, &PyTuple_GET_ITEM(mod_consts[347], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_54);
                    if (tmp_list_element_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 310;
                        type_description_1 = "oooc";
                        goto list_build_exception_22;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_24);
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 311;
                        type_description_1 = "oooc";
                        goto list_build_exception_22;
                    }
                    tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[295]);
                    if (tmp_called_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 311;
                        type_description_1 = "oooc";
                        goto list_build_exception_22;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 311;
                    tmp_list_element_24 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_55, &PyTuple_GET_ITEM(mod_consts[348], 0), mod_consts[108]);
                    Py_DECREF(tmp_called_value_55);
                    if (tmp_list_element_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 311;
                        type_description_1 = "oooc";
                        goto list_build_exception_22;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 2, tmp_list_element_24);
                }
                goto list_build_noexception_20;
                // Exception handling pass through code for list_build:
                list_build_exception_22:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_20:;
                PyList_SET_ITEM(tmp_args_element_value_3, 19, tmp_list_element_4);
                tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_expression_value_55 == NULL)) {
                    tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                }

                if (tmp_expression_value_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[295]);
                if (tmp_called_value_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 312;
                tmp_list_element_25 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_56, &PyTuple_GET_ITEM(mod_consts[349], 0), mod_consts[108]);
                Py_DECREF(tmp_called_value_56);
                if (tmp_list_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;
                    type_description_1 = "oooc";
                    goto list_build_exception_3;
                }
                tmp_list_element_4 = MAKE_LIST_EMPTY(2);
                {
                    PyObject *tmp_called_instance_2;
                    PyList_SET_ITEM(tmp_list_element_4, 0, tmp_list_element_25);
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 313;
                        type_description_1 = "oooc";
                        goto list_build_exception_23;
                    }
                    frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 313;
                    tmp_list_element_25 = CALL_METHOD_WITH_SINGLE_ARG(
                        tmp_called_instance_2,
                        mod_consts[97],
                        PyTuple_GET_ITEM(mod_consts[350], 0)
                    );

                    if (tmp_list_element_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 313;
                        type_description_1 = "oooc";
                        goto list_build_exception_23;
                    }
                    PyList_SET_ITEM(tmp_list_element_4, 1, tmp_list_element_25);
                }
                goto list_build_noexception_21;
                // Exception handling pass through code for list_build:
                list_build_exception_23:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for list_build:
                list_build_noexception_21:;
                PyList_SET_ITEM(tmp_args_element_value_3, 20, tmp_list_element_4);
            }
            goto list_build_noexception_22;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_22:;
            frame_71e0bc87aeed0e23396ebab863d03c00->m_frame.f_lineno = 258;
            tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oooc";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_3);
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_3;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_71e0bc87aeed0e23396ebab863d03c00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71e0bc87aeed0e23396ebab863d03c00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71e0bc87aeed0e23396ebab863d03c00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71e0bc87aeed0e23396ebab863d03c00,
        type_description_1,
        var_menu_layout,
        var_config,
        var_layout,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_71e0bc87aeed0e23396ebab863d03c00 == cache_frame_71e0bc87aeed0e23396ebab863d03c00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_71e0bc87aeed0e23396ebab863d03c00);
        cache_frame_71e0bc87aeed0e23396ebab863d03c00 = NULL;
    }

    assertFrameObject(frame_71e0bc87aeed0e23396ebab863d03c00);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_layout);
    tmp_return_value = var_layout;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_menu_layout);
    Py_DECREF(var_menu_layout);
    var_menu_layout = NULL;
    CHECK_OBJECT(var_config);
    Py_DECREF(var_config);
    var_config = NULL;
    CHECK_OBJECT(var_layout);
    Py_DECREF(var_layout);
    var_layout = NULL;
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

    CHECK_OBJECT(var_menu_layout);
    Py_DECREF(var_menu_layout);
    var_menu_layout = NULL;
    Py_XDECREF(var_config);
    var_config = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function__1_update_layout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__1_update_layout,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f4061c4350ada229b59eab6dab37618,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__2_apk_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__2_apk_name,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_001cc4a3201d9e76664d1d7cfa4f342d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__3_main() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__3_main,
        mod_consts[373],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_423847a907fe33697957c6d6dd249986,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__3_main$$$function__1_layu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__3_main$$$function__1_layu,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_00c0b2369cdafe805f581dfced9f0e1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__4_config_screen() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__4_config_screen,
        mod_consts[374],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eb5999aced35de165c3cba13546350b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__4_config_screen$$$function__1_layu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__4_config_screen$$$function__1_layu,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_ff35353eafdd347b0427d2ba20ba8a7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__5_read_config_from_json() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__5_read_config_from_json,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6311d8959048c770e9f026c44472d71a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__6_profiles_screen() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__6_profiles_screen,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7689733633d28c77cfa186ceb9cd6d88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__6_profiles_screen$$$function__1_layut(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__6_profiles_screen$$$function__1_layut,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_71e0bc87aeed0e23396ebab863d03c00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        closure,
        1
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

function_impl_code functable___main__[] = {
    impl___main__$$$function__3_main$$$function__1_layu,
    impl___main__$$$function__4_config_screen$$$function__1_layu,
    impl___main__$$$function__6_profiles_screen$$$function__1_layut,
    impl___main__$$$function__1_update_layout,
    impl___main__$$$function__2_apk_name,
    impl___main__$$$function__3_main,
    impl___main__$$$function__4_config_screen,
    impl___main__$$$function__5_read_config_from_json,
    impl___main__$$$function__6_profiles_screen,
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

    function_impl_code *current = functable___main__;
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

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
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

    if (offset > sizeof(functable___main__) || offset < 0) {
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

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable___main__[offset],
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
        module___main__,
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
PyObject *modulecode___main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("__main__");

    // Store the module for future use.
    module___main__ = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 1
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
        PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in init__main__\n");

    moduledict___main__ = MODULE_DICT(module___main__);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_c76b70dbf99f8c0bb37cd77f9ca63382;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    frame_c76b70dbf99f8c0bb37cd77f9ca63382 = MAKE_MODULE_FRAME(codeobj_c76b70dbf99f8c0bb37cd77f9ca63382, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c76b70dbf99f8c0bb37cd77f9ca63382);
    assert(Py_REFCNT(frame_c76b70dbf99f8c0bb37cd77f9ca63382) == 2);

    // Framed code:
    {
        PyObject *tmp_imported_value_1;
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_HARD_SITE();
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_imported_value_2;
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 1;
        tmp_imported_value_2 = IMPORT_MODULE1(mod_consts[351]);
        if (tmp_imported_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_2);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[357];
        tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[115];
        tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[359];
        tmp_globals_arg_value_3 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[360];
        tmp_level_value_3 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict___main__,
                mod_consts[14],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[361];
        tmp_globals_arg_value_4 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[362];
        tmp_level_value_4 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict___main__,
                mod_consts[29],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[363];
        tmp_globals_arg_value_5 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[364];
        tmp_level_value_5 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict___main__,
                mod_consts[54],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[54]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict___main__,
                mod_consts[31],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[31]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_12);
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
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[365];
        tmp_globals_arg_value_6 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[366];
        tmp_level_value_6 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 7;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict___main__,
                mod_consts[53],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[53]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict___main__,
                mod_consts[67],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[67]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict___main__,
                mod_consts[120],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[120]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_16);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[367];
        tmp_globals_arg_value_7 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[368];
        tmp_level_value_7 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict___main__,
                mod_consts[49],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[369];
        tmp_globals_arg_value_8 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[370];
        tmp_level_value_8 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict___main__,
                mod_consts[105],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[371];
        tmp_globals_arg_value_9 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[372];
        tmp_level_value_9 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 10;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict___main__,
                mod_consts[18],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[18]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict___main__,
                mod_consts[48],
                mod_consts[85]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[48]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_21);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[59];
        tmp_globals_arg_value_10 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 11;
        tmp_assign_source_22 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[15];
        tmp_globals_arg_value_11 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[85];
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 12;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION___main__$$$function__1_update_layout();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION___main__$$$function__2_apk_name();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION___main__$$$function__3_main();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION___main__$$$function__4_config_screen();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION___main__$$$function__5_read_config_from_json();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION___main__$$$function__6_profiles_screen();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_29);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[373]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[373]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame.f_lineno = 456;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c76b70dbf99f8c0bb37cd77f9ca63382, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c76b70dbf99f8c0bb37cd77f9ca63382->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c76b70dbf99f8c0bb37cd77f9ca63382, exception_lineno);
    }



    assertFrameObject(frame_c76b70dbf99f8c0bb37cd77f9ca63382);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("__main__", false);

    Py_INCREF(module___main__);
    return module___main__;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 1
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("__main__", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
